/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbeall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 20:30:30 by jbeall            #+#    #+#             */
/*   Updated: 2018/10/30 10:03:56 by jbeall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst)
		return (NULL);
	if (!(new_lst = f(lst)))
		return (NULL);
	elem = new_lst;
	lst = lst->next;
	while (lst)
	{
		if (!(elem->next = f(lst)))
			return (NULL);
		elem = elem->next;
		lst = lst->next;
	}
	elem->next = NULL;
	return (new_lst);
}
