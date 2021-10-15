/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:34:31 by merlich           #+#    #+#             */
/*   Updated: 2021/10/15 13:01:23 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_isspace(const char *nptr, int *i)
{
	while (nptr[*i] == ' ' || nptr[*i] == '\f' || nptr[*i] == '\n' || \
			nptr[*i] == '\r' || nptr[*i] == '\t' || nptr[*i] == '\v')
	{
		*i = *i + 1;
	}
	return ;
}

static void	ft_issign(const char *nptr, int *i, int *flag_sign)
{
	if (nptr[*i] == '-')
	{
		*flag_sign = -1;
		*i = *i + 1;
	}
	else if (nptr[*i] == '+')
	{
		*flag_sign = 1;
		*i = *i + 1;
	}
	return ;
}

static void	ft_isdigit(const char *nptr, int *i, long long *res)
{
	while (nptr[*i] >= '0' && nptr[*i] <= '9')
	{
		*res = *res * 10 + (nptr[*i] - '0');
		*i = *i + 1;
	}
	return ;
}

int	ft_atoi(const char *nptr)
{
	int			i;
	int			flag_sign;
	long long	res;

	i = 0;
	flag_sign = 1;
	res = 0;
	ft_isspace(nptr, &i);
	ft_issign(nptr, &i, &flag_sign);
	ft_isdigit(nptr, &i, &res);
	res = flag_sign * res;
	if (res > 2147483647)
	{
		res = 2147483647;
	}
	else if (res < -2147483648)
	{
		res = -2147483648;
	}
	return (res);
}
