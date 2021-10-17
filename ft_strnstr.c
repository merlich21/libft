/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:50:30 by merlich           #+#    #+#             */
/*   Updated: 2021/10/17 14:16:57 by merlich          ###   ########.fr       */
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
	size_t		len_needle;
	char		*ptr;

	i = 0;
	j = 0;
	len_needle = ft_strlen(needle);
	ptr = NULL;
	if (len_needle == 0)
		return ((char *)(haystack));
	while ((i < len) && (haystack[i] != '\0'))
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
		if (j == len_needle)
		{
			ptr = (char *)(haystack + i - len_needle);
			break ;
		}
	}
	return (ptr);
}
