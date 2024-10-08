/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:15:11 by rtari-ca          #+#    #+#             */
/*   Updated: 2024/10/08 16:33:54 by rodrigo          ###   ########.fr       */
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