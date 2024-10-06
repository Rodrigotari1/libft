/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtari-ca <rtari-ca@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:15:11 by rtari-ca          #+#    #+#             */
/*   Updated: 2024/10/06 20:03:56 by rtari-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *last = NULL;

	while (*s != '\0')
	{
		if (*s == (char)c)
		last = s;
	s++;
	}
	if ((char)c == '\0')
	return (char *)s;
return (char *)last;
}
