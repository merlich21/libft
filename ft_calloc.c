/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:02:07 by merlich           #+#    #+#             */
/*   Updated: 2021/10/15 15:45:32 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = (char *) s;
	while (i < n)
	{
		s1[i] = c;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	len;
	void	*ptr;

	len = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		ptr = NULL;
	}
	else
	{
		ptr = malloc(len);
		if (NULL == ptr)
		{
			return (NULL);
		}
		else
		{
			ptr = ft_memset(ptr, '\0', len);
		}
	}
	return (ptr);
}
