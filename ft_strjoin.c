/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:22:42 by merlich           #+#    #+#             */
/*   Updated: 2021/10/16 20:56:34 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	i = 0;
	j = 0;
	new_str = malloc(ft_strlen(s1) + ft_strlen(s2));
	if (NULL == new_str)
		return (NULL);
	else
	{
		while (s1[i] != '\0')
		{
			new_str[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			new_str[i] = s2[j];
			i++;
			j++;
		}
		new_str[i] = '\0';
		return (new_str);
	}
}
