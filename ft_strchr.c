/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:47:23 by merlich           #+#    #+#             */
/*   Updated: 2021/10/14 14:21:51 by merlich          ###   ########.fr       */
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

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*r;

	i = 0;
	r = NULL;
	while (i <= ft_strlen(s))
	{
		if (s[i] == c)
		{
			r = (char *)s + i;
			return (r);
		}
		i++;
	}
	return (r);
}
