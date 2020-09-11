/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:29:44 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/06 13:27:55 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			i;
	size_t			res;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	res = i;
	while (src[i - res] != '\0' && (i + 1) < size)
	{
		dest[i] = src[i - res];
		i++;
	}
	if (res < size)
		dest[i] = '\0';
	i = 0;
	while (src[i++] != '\0')
		res++;
	return (res);
}
