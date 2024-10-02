/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:02:39 by rodrigo           #+#    #+#             */
/*   Updated: 2024/10/02 11:16:49 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int i;
    i = 0;
    
    if (size == 0) {
        while (src[i] != '\0') {
            i++;
        }
        return i;
    }

    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    while(src[i])
    {
        i++;
    }
    return (i);
}

int main()
{
    char dest[20];
    const char *src = "hey bud";

    unsigned int len  = ft_strlcpy(dest, src, sizeof(dest));
    printf("Test 1: %s (length: %u)\n", dest, len);
}
