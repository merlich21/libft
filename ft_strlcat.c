/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:32:53 by merlich           #+#    #+#             */
/*   Updated: 2021/10/12 21:21:27 by merlich          ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	if ((dstsize != 0) && (ft_strlen(src) <= dstsize))
	{
		i = 0;
		while (src[i] != '\0')
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[ft_strlen(dst) + i] = '\0';
	}	
	return (ft_strlen(dst));
}
