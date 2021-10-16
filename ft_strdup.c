/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:46:50 by merlich           #+#    #+#             */
/*   Updated: 2021/10/16 11:24:53 by merlich          ###   ########.fr       */
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

char	*ft_strdup(const char *s1)
{
	int		errsv;
	char	*ptr;

	ptr = malloc(ft_strlen(s1));
	if (NULL == ptr)
	{
		errsv = errno;
		return (NULL);
	}
	else
	{
		ptr = (char *) s1;
	}
	return (ptr);
}
