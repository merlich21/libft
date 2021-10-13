/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:29:33 by merlich           #+#    #+#             */
/*   Updated: 2021/10/13 16:26:51 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		res;
	size_t	i;

	res = 0;
	i = 0;
	while ((s1 != '\0') && (s2 != '\0') && (i < n) && (s1[i] == s2[i]))
	{
		i++;
	}
	res = s1[i] - s2[i];
	return (res);
}
