/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:28:00 by rodrigo           #+#    #+#             */
/*   Updated: 2024/09/25 10:31:45 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, unsigned int n) 
{
    unsigned char *d = (unsigned char *)dest; // Cast dest to unsigned char*
    const unsigned char *s = (const unsigned char *)src; // Cast src to unsigned char*
    
    while (n--) { // Loop until n bytes are copied
        *d++ = *s++; // Copy byte from src to dest
    }
    
    return dest; // Return the destination pointer
}