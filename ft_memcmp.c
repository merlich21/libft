/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:15:13 by merlich           #+#    #+#             */
/*   Updated: 2021/10/13 19:48:36 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				res;
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	res = 0;
	i = 0;
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while ((p1[i] != '\0') && (p2[i] != '\0') && (i < n))
	{
		if (p1[i] != p2[i])
		{
			res = p1[i] - p2[i];
			break ;
		}
		i++;
	}
	return (res);
}
