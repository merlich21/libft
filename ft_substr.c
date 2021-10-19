/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:26:46 by merlich           #+#    #+#             */
/*   Updated: 2021/10/18 16:55:17 by merlich          ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;

	i = 0;
	if (s == NULL)
		return (NULL);
	sub_str = malloc(len + 1);
	if (NULL == sub_str)
		return (NULL);
	else
	{
		if (start >= ft_strlen(s))
		{
			sub_str = "";
			return (sub_str);
		}
		while (i < len)
		{
			sub_str[i] = s[start + i];
			i++;
		}
		sub_str[i] = '\0';
	}
	return (sub_str);
}
