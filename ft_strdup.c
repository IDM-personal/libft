/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 09:31:36 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/06 11:07:00 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*copy;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s1);
	if (!(copy = malloc(len + 1)))
		return (0);
	while (i != len)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = 0;
	return (&copy[0]);
}
