/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:39:32 by rodrigo           #+#    #+#             */
/*   Updated: 2024/09/26 17:05:11 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dest, const void *src, unsigned int n)
{
    unsigned char *c = (unsigned char *)dest;
    unsigned char *s = unsigned char *src;
    unsigned int i; 
    i = 0;

    if (c == s)
    {
        return dest;
    }

}