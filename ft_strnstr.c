/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 09:18:53 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/07 10:19:59 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		f;
	int		nlen;

	if ((nlen = ft_strlen(needle)) == 0)
		return ((char*)hay);
	i = 0;
	while (hay[i] != '\0' && i <= len)
	{
		if (hay[i] == needle[0])
		{
			j = i;
			f = 0;
			while (j < len && hay[j] == needle[j - i])
			{
				f++;
				if (f == nlen)
					return ((char*)&hay[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
