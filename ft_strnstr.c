/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:50:30 by merlich           #+#    #+#             */
/*   Updated: 2021/10/14 20:33:27 by merlich          ###   ########.fr       */
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

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		len_s2;
	char		*ptr;

	i = 0;
	j = 0;
	len_s2 = ft_strlen(s2);
	ptr = NULL;
	while ((s1[i] != '\0') && (i < n) && (s2[j] != '\0') && (len_s2 != 0))
	{
		if (s2[j] == s1[i])
		{
			ptr = (char *) s1 + i;
			j++;
		}
		else
			j = 0;
		i++;
	}
	if (len_s2 == 0)
		ptr = ((char *)(s1));
	else if ((len_s2 != 0) && (j == len_s2))
		ptr = ptr - len_s2 + 1;
	return (ptr);
}
