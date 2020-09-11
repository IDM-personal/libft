/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 08:38:41 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/04 12:37:54 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t size)
{
	unsigned char	ch;
	int				i;
	char			*str;

	str = (char*)b;
	ch = (unsigned char)c;
	if (size > 0)
	{
		i = 0;
		while ((size_t)i < size)
		{
			*str = ch;
			i++;
			str++;
		}
		while (i != 0)
		{
			str--;
			i--;
		}
	}
	return (str);
}
