/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:46:50 by merlich           #+#    #+#             */
/*   Updated: 2021/10/17 18:06:39 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

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

char	*ft_strdup(const char *s)
{
	int		i;
	int		errsv;
	char	*ptr;

	i = 0;
	ptr = malloc(ft_strlen(s) + 1);
	if (NULL == ptr)
	{
		errsv = errno;
		return (NULL);
	}
	else
	{
		while (s[i] != '\0')
		{
			ptr[i] = s[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
