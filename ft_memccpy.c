/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 08:38:41 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/12 13:09:53 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
		*((char *)str1 + i) = *((char *)str2 + i);
		if (*((unsigned char *)str2 + i) == (unsigned char)c)
		{
			i++;
			dst++;
			return (dst);
		}
		dst++;
		i++;
	}
	return (NULL);
}
