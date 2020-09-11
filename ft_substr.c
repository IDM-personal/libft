/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:48:26 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/10 10:34:31 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cad;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (!(cad = (char*)ft_calloc((len + 1), sizeof(char))))
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (cad);
	i = 0;
	while (i < len && s[i + start] != 0)
	{
		cad[i] = s[i + start];
		i++;
	}
	return (cad);
}
