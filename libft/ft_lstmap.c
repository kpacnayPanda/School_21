/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosette <mrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:41:16 by mrosette          #+#    #+#             */
/*   Updated: 2020/11/10 16:14:24 by mrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *elem;
	t_list *node;

	node = NULL;
	while (lst && f)
	{
		if (!(elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&node, elem);
		lst = lst->next;
	}
	return (node);
}
