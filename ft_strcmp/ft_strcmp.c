# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    vscode-42header                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kube <hello@kube.io>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/18 13:37:42 by kube              #+#    #+#              #
#    Updated: 2016/09/18 13:11:04 by kube             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
