/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:03:35 by rodrigo           #+#    #+#             */
/*   Updated: 2024/09/26 16:31:34 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

void *ft_memchr(const void *str, int c, unsigned int n)
{
    const unsigned char *s = (const unsigned char *)str;
    unsigned int i;
    i = 0;

    while (i < n)
    {
        if (s[i] == (unsigned char) c)
        {
            return (void *)(s + i);
        }
        i++;
    }
    return (void *)0;
}

/*int main() {
    const char *str = "Hello, World!";
    char ch = 'W';
    unsigned int n = strlen(str); // Length of the string

    // Use memchr to find the character 'W'
    char *result = ft_memchr(str, ch, n);
    
    if (result != NULL) {
        printf("Found '%c' at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}*/