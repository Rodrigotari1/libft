/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtari-ca <rtari-ca@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:15:11 by rtari-ca          #+#    #+#             */
/*   Updated: 2024/10/03 13:43:25 by rtari-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	const char *ultim = 0;
	int i;
	i = 0;

	while(s[i])
	{
		if (s[i] == (char)c)
			ultim = &s[i];
		i++;
	}

	if(c == '\0')
		return (char *)&s[i];

		return ((char *)ultim);
}
#include <stdio.h>  // For printf
// Assuming your function prototypes are in libft.h

int main(void)
{
    const char *str = "Hello World! This is a test string.";

    // Case 1: Find the last occurrence of 's'
    char *result = ft_strrchr(str, 's');
    if (result)
        printf("Last occurrence of 's': %s\n", result);
    else
        printf("'s' not found in the string.\n");

    // Case 2: Find the last occurrence of 'o'
    result = ft_strrchr(str, 'o');
    if (result)
        printf("Last occurrence of 'o': %s\n", result);
    else
        printf("'o' not found in the string.\n");

    // Case 3: Find the null terminator ('\0')
    result = ft_strrchr(str, '\0');
    if (result)
        printf("Pointer to the end of the string: %p\n", result);

    // Case 4: Find a character that does not exist ('z')
    result = ft_strrchr(str, 'z');
    if (result)
        printf("Last occurrence of 'z': %s\n", result);
    else
        printf("'z' not found in the string.\n");

    return 0;
}
