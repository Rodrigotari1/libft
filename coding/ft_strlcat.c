/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:20:46 by rodrigo           #+#    #+#             */
/*   Updated: 2024/10/03 17:55:09 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t dst_l;
    size_t src_l;
    size_t i;
    size_t j;

    dst_l = ft_strlen(dst);
    src_l = ft_strlen(src);

    j = dst_l;
    i = 0;

    if (dstsize > 0 && dst_l < dstsize - 1)
    {
        while (src[i] && dst_l + i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
            j++;
        }
        dst[j] = 0;
    }
    if (dst_l >= dstsize)
        dst_l = dstsize;
        return (dst_l + src_l);
}

#include <stdio.h>

int main()
{
    char dst[20] = "Damn";
    char src[] = "BOI";

    size_t result = ft_strlcat(dst, src, sizeof(dst));

    printf("resulting: %s\n", dst);
    printf("lenght tried: %zu\n", result);

    return 0;

}

