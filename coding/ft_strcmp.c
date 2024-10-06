/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:41:37 by rodrigo           #+#    #+#             */
/*   Updated: 2024/10/02 19:41:41 by rodrigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	int i;
	i = 0;

	while(s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return ((unsigned const char)s1[i] - (unsigned const char)s2[i]);
}
