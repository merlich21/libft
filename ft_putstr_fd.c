/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:16:35 by merlich           #+#    #+#             */
/*   Updated: 2021/10/09 18:37:17 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char	*s, int	fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	write(fd, s, i);
}
