/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:07:15 by merlich           #+#    #+#             */
/*   Updated: 2021/10/25 23:26:21 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new_list;
	t_list	*new_elem;
	t_list	*tmp;

	new_elem = ft_lstnew(f(lst->content));
	if (NULL == new_elem)
	{
		ft_lstdelone(new_elem, del);
		return (NULL);
	}
	new_list = &new_elem;
	tmp = new_elem;
	
	while (lst)
	{
		lst = lst->next;
		new_elem = ft_lstnew(f(lst->content));
		if (new_elem != NULL)
		{
			ft_lstadd_back(&tmp, new_elem);
			tmp = new_elem;
		}
		else
		{
			ft_lstclear(new_list, del);
			break ;
		}
	}
	return (*new_list);
}
