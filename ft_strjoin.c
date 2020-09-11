/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 10:38:44 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/10 10:55:30 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*cad;
	int		start;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (NULL);
	if (!(cad = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[i] != 0)
	{
		cad[i] = s1[i];
		i++;
	}
	start = i;
	i = 0;
	while (s2[i] != 0)
	{
		cad[i + start] = s2[i];
		i++;
	}
	cad[i + start] = 0;
	return (cad);
}
