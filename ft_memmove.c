/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:37:37 by merlich           #+#    #+#             */
/*   Updated: 2021/10/15 21:14:09 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		start;
	size_t		stop;
	int			step;

	if (dest != src)
	{
		if (dest > src)
		{
			start = n - 1;
			step = -1;
			stop = -1;
		}
		if (dest < src)
		{
			start = 0;
			step = 1;
			stop = n;
		}
		while (start != stop)
		{
			((char *)(dest))[start] = ((const char *)(src))[start];
			start += step;
		}
	}
	return (dest);
}
