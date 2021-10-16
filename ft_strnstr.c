/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:50:30 by merlich           #+#    #+#             */
/*   Updated: 2021/10/16 11:41:00 by merlich          ###   ########.fr       */
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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		slen;
	char		*ptr;

	i = 0;
	j = 0;
	slen = ft_strlen(needle);
	ptr = NULL;
	while ((haystack[i] != '\0') && (i < len) && (needle[j] != '\0') && (slen))
	{
		if (needle[j] == haystack[i])
		{
			ptr = (char *) haystack + i;
			j++;
		}
		else
			j = 0;
		i++;
	}
	if (slen == 0)
		ptr = ((char *)(haystack));
	else if ((slen != 0) && (j == slen))
		ptr = ptr - slen + 1;
	return (ptr);
}
