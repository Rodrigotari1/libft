/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:41:16 by rodrigo           #+#    #+#             */
/*   Updated: 2024/10/02 19:44:36 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"
void ft_bzero(void *s, unsigned int n)
{
    unsigned char *dtr = (unsigned char *)s;
    while (n--)
    {
        *dtr++ = 0;
    }
}


/*int main() {  
    // Example 1: Clearing a string
    char str[] = "Hello, World!";
    printf("Before: %s\n", str);
    ft_bzero(str, 5);
    printf("After (5 bytes): %s\n", str);

    // Example 2: Clearing an integer array
    int numbers[] = {1, 2, 3, 4, 5};
    printf("\nBefore: ");
    for (int i = 0; i < 5; i++) printf("%d ", numbers[i]);
    ft_bzero(numbers, sizeof(int) * 2);
    printf("\nAfter (2 ints): ");
    for (int i = 0; i < 5; i++) printf("%d ", numbers[i]);

    // Example 3: Clearing part of a struct
    struct {
        int a;
        char b[10];
        double c;
    } data = {42, "test", 3.14};
    printf("\n\nBefore: a=%d, b=%s, c=%f\n", data.a, data.b, data.c);
    ft_bzero(&data.b, 10);
    printf("After (clear b): a=%d, b=%s, c=%f\n", data.a, data.b, data.c);

    return 0;
}*/