/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 08:38:41 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/13 09:14:34 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_solapa(unsigned char *str1, unsigned char *str2, int i)
{
	i--;
	while (i > 0)
	{
		*((char *)str1 + i) = *((char *)str2 + i);
		i--;
	}
	*((char *)str1 + i) = *((char *)str2 + i);
	return (str1);
}

void			*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*str1;
	unsigned char		*str2;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (i < n)
	{
		if (&*((char *)str1) == &*((char *)str2 + i))
			return (ft_solapa(str1, str2, n));
		i++;
	}
	i = 0;
	while (i < n)
	{
		*((char *)str1 + i) = *((char *)str2 + i);
		i++;
	}
	return (dst);
}
