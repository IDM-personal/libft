/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 11:02:39 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/13 09:15:26 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			inset(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*cad;
	int		start;
	int		end;

	if (s1 == 0)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != 0 && inset(s1[start], set))
		start++;
	while (s1[end - 1] != 0 && inset(s1[end - 1], set) && end - 1 > start)
		end--;
	if (!(cad = (char*)malloc((end - start) + 1)))
		return (NULL);
	i = start;
	while (i < end)
	{
		cad[i - start] = s1[i];
		i++;
	}
	cad[i - start] = '\0';
	return (cad);
}
