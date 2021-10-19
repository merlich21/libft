/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:47:23 by merlich           #+#    #+#             */
/*   Updated: 2021/10/19 23:28:15 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
