/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:26:34 by rodrigo           #+#    #+#             */
/*   Updated: 2024/10/03 22:18:04 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return (0);
}

/*#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main() {
    printf("Result 1: %d\n", ft_strncmp("Hello", "Hello", 5)); // 0
    printf("Result 2: %d\n", ft_strncmp("Hello", "HelLo", 5)); // Non-zero
    printf("Result 3: %d\n", ft_strncmp("Hello", "Hello!", 5)); // 0
    printf("Result 4: %d\n", ft_strncmp("Hello!", "Hello", 5)); // 0
    printf("Result 5: %d\n", ft_strncmp("Hello", "Hell", 5)); // Non-zero

    return 0;
}*/