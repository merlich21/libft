/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:47:23 by merlich           #+#    #+#             */
/*   Updated: 2021/10/12 22:09:47 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*r = NULL;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			*r = 'a';
			return (r);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	int			c;
	const char	*s;
	const char	str[] = "ALLOOO SPASIBOO";

	s = str;
	c = 'P';
	printf("%c\n", *ft_strchr(s, c));
	return (0);
}
