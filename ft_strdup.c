/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.strdup                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtari-ca <rtari-ca@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:41:12 by rtari-ca          #+#    #+#             */
/*   Updated: 2024/10/01 12:41:28 by rtari-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(const char *s)
{
	char *dup;
	int len = 0;
	int i;
	i = 0;

	while(s[len] != '\0')
	{
		len++;
	}
	dup = (char *)malloc(len + 1);
	if(!dup)
	{
		return NULL;
	}
	len = 0;
	while(i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[len] = '\0';
	return dup;

}

