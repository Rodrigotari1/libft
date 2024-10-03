/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:42:42 by rodrigo           #+#    #+#             */
/*   Updated: 2024/10/02 19:55:11 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy( void* restrict dest, const void* restrict src, int c, unsigned int count )
{
	unsigned char *d = (unsigned char *) dest;
    const unsigned char *s = (const unsigned char *) src;
    unsigned int i;
    i = 0;

    while (i < count)
    {
        d[i] = s[i];
        if (s[i] == (unsigned char)c)
        { 
        return (d + 1 + i);
        }
        i++;
    }
    return NULL;
}