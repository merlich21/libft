/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:26:46 by merlich           #+#    #+#             */
/*   Updated: 2021/10/20 14:27:41 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;

	i = 0;
	sub_str = malloc(len + 1);
	if (NULL == sub_str)
		return (NULL);
	if (*s == '\0')
	{
		sub_str = (char *) s;
	}
	else if (start >= ft_strlen(s))
	{
		*sub_str = '\0';
	}
	else
	{
		while (i < len)
		{
			sub_str[i] = s[start + i];
			i++;
		}
		sub_str[i] = '\0';
	}
	return (sub_str);
}
