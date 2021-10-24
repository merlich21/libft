/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:42:21 by merlich           #+#    #+#             */
/*   Updated: 2021/10/24 20:41:38 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_curr;
	t_list	*next;

	lst_curr = *lst;
	next = NULL;
	while (lst_curr)
	{
		next = lst_curr->next;
		/* ft_lstdelone(&lst_curr, del); */
		del(lst_curr->content);
		//free(lst_curr);
		lst_curr = next;
	}
	free(lst);
}
