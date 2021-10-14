/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:37:37 by merlich           #+#    #+#             */
/*   Updated: 2021/10/14 16:50:11 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*src1;
	char		*dest1;
	char		*tmp;

	i = 0;
	src1 = (char *) src;
	dest1 = (char *) dest;
	while (i < n)
	{
		tmp[i] = src1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest1[i] = tmp[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	size_t		n;
	const void	*src;
	void		*dest;
	const char	str[] = "zzzzzzzzz";
	char		str1[] = "OOOOOPPPPPP&";

	n = 1;
	src = &str;
	dest = &str1;
	printf("%s\n", ft_memmove(dest, src, n));
	//printf("%s\n", memmove(dest, src, n));
	return (0);
}
