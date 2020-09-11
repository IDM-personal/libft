/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 10:22:26 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/12 13:31:50 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lista;
	t_list	*lstnode;
	t_list	*node;

	if (!lst)
		return (NULL);
	if (!(lista = ft_lstnew(f(lst->content))))
		return (NULL);
	lstnode = lst->next;
	node = lista;
	while (lstnode)
	{
		if (!(lista->next = ft_lstnew(f(lstnode->content))))
		{
			del(lstnode->content);
			return (NULL);
		}
		lista = lista->next;
		lstnode = lstnode->next;
	}
	return (node);
}
