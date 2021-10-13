/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:51:08 by merlich           #+#    #+#             */
/*   Updated: 2021/10/11 16:11:43 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_int_len(int n)
{
	int	i;

	if (n < 0)
		i = 2;
	else
		i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_putnbr(int n, char *ptr)
{
	if (n < 0)
	{
		n = -n;
		*ptr = '-';
		ptr = ptr + 1;
	}
	if (n / 10 != 0)
	{
		ptr = ft_putnbr(n / 10, ptr);
	}
	*ptr = n % 10 + '0';
	*(ptr + 1) = '\0';
	return (ptr + 1);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_int_len(n);
	str = malloc(len + 1);
	if (NULL == str)
		return (NULL);
	else
	{
		if (n == -2147483648)
			return ("-2147483648");
		ft_putnbr(n, str);
		return (str);
	}
}
