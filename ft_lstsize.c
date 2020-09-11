/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 13:39:43 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/12 09:13:10 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*lstnode;

	lstnode = lst;
	i = 0;
	while (lstnode != NULL)
	{
		lstnode = lstnode->next;
		i++;
	}
	return (i);
}
