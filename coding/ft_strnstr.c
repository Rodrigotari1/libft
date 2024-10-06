/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:19:10 by rodrigo           #+#    #+#             */
/*   Updated: 2024/10/04 00:20:46 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    // If needle is empty, return the haystack
    if (!*needle)
        return ((char *)haystack);
    
    i = 0;
    // Iterate through haystack up to len characters
    while (haystack[i] && i < len)
    {
        j = 0;
        // Compare characters of needle with haystack
        while (needle[j] && haystack[i + j] && i + j < len 
               && haystack[i + j] == needle[j])
            j++;
        // If all characters in needle match, return pointer to match in haystack
        if (!needle[j])
            return ((char *)&haystack[i]);
        i++;
    }
    // If no match found, return NULL
    return (NULL);
}

int main()
{
    const char *haystack = "Hello, World! This is a test string.";
    const char *needle1 = "World";
    const char *needle2 = "test";
    const char *needle3 = "not found";
    size_t len = 30;

    char *result1 = ft_strnstr(haystack, needle1, len);
    char *result2 = ft_strnstr(haystack, needle2, len);
    char *result3 = ft_strnstr(haystack, needle3, len);

    printf("Haystack: %s\n", haystack);
    printf("Searching for '%s' (len %zu):\n", needle1, len);
    printf("Result 1: %s\n", result1 ? result1 : "NULL");
    
    printf("\nSearching for '%s' (len %zu):\n", needle2, len);
    printf("Result 2: %s\n", result2 ? result2 : "NULL");
    
    printf("\nSearching for '%s' (len %zu):\n", needle3, len);
    printf("Result 3: %s\n", result3 ? result3 : "NULL");

    return 0;
}

