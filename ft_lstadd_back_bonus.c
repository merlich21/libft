/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:12:55 by merlich           #+#    #+#             */
/*   Updated: 2021/10/24 20:24:23 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_last;

	lst_last = ft_lstlast(*lst);
	if (ft_lstlast(*lst) == NULL)
	{
		ft_lstadd_front(lst, new);
	}
	else
	{
		lst_last->next = new;
	}
}
