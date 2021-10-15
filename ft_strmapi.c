/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:39:43 by merlich           #+#    #+#             */
/*   Updated: 2021/10/15 20:03:20 by merlich          ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*ptr;

	i = 0;
	len = ft_strlen(s);
	ptr = (char *)malloc(len);
	if (NULL == ptr)
	{
		return (NULL);
	}
	else
	{
		while (s[i] != '\0')
		{
			ptr[i] = f(i, s[i]);
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
