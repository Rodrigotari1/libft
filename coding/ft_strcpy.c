/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:38:08 by rodrigo           #+#    #+#             */
/*   Updated: 2024/09/26 13:56:10 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;
    while(src[i])
    {
    dest[i] = src[i];
    i++;
    }
    dest[i] = '\0';
    return (dest);
}

/*int main(void)
{
    char src[] = "lol";
    char dest[5];
    ft_strcpy(dest, src);
    printf("%s", dest);
    return 0;
}*/