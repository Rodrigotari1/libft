/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:09:34 by rodrigo           #+#    #+#             */
/*   Updated: 2024/10/08 18:45:55 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char c)
{
    int count;
    count = 0;
    
    int in_word;
    in_word = 0;
    while (*s)
    {
        if(*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
        {
            in_word = 0;
        }
        s++;
    }
    return (count);
}

static int word_length(char const *s, char c)
{
    int len;
    len = 0;
    while(*s && *s != c)
    {
        len++;
        s++;
    }
    return (len);
}

char **ft_split(char const *s, char c)
{
    int i = 0;
    char **res;
    int word_count = count_words(s, c);

    res = (char **)malloc(sizeof(char *) * (word_count + 1));
    if(!res)
        return (NULL);
    
    while (i < word_count)
    {
        while(*s == c)
            s++;
        int len = word_length(s, c);
        res[i] = (char *)malloc(sizeof(char) * (len + 1));
        if(!res[i])
        {
            while(i--)
                free(res[i]);
            free(res);
            return (NULL);
        }
        ft_strlcpy(res[i], s, len + 1);
        s += len;
        i++;
    }
    res[i] = NULL;
    return res;
}