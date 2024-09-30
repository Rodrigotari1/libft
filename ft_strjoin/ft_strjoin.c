/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:04:00 by rodrigo           #+#    #+#             */
/*   Updated: 2024/09/25 09:04:53 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    size_t len = 0;
    while (s[len])
        len++;
    return len;
}

char *ft_strcat(char *dest, const char *src)
{
    size_t i = 0;
    size_t j = 0;

    while (dest[i])
        i++;
    while (src[j])
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return dest;
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *result;
    size_t len1, len2;

    if (!s1 || !s2)
        return (NULL);
    
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);

    result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    if (!result)
        return (NULL);

    result[0] = '\0';
    ft_strcat(result, s1);
    ft_strcat(result, s2);

    return (result);
}
