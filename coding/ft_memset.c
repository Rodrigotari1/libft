/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtari-ca <rtari-ca@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:10:24 by rodrigo           #+#    #+#             */
/*   Updated: 2024/10/03 12:00:21 by rtari-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

void *ft_memset(void *str, int c, unsigned int n)
{
    unsigned int i;
    i = 0;
    while(i < n)
    {
        ((unsigned char *) str)[i] = (unsigned char) c;
        i++;

    }
    return (str);
}

/*int main(void)
{
    char str[] = "Hello, World!";
    ft_memset(str, 'A', 5);
    printf("%s\n", str);
    return 0;
}*/
