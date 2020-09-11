/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 09:19:11 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/12 09:22:26 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstnode;

	lstnode = lst;
	while (lstnode != NULL)
	{
		if (lstnode->next == NULL)
			return (lstnode);
		lstnode = lstnode->next;
	}
	return (NULL);
}
