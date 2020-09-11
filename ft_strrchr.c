/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 10:38:08 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/12 13:12:52 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			ch;
	int			i;
	char		*lo;
	char		*cstr;

	cstr = (char*)str;
	lo = NULL;
	i = 0;
	ch = c;
	while (cstr[i] != 0)
	{
		if (cstr[i] == ch)
			lo = &cstr[i];
		i++;
	}
	if (cstr[i] == ch)
		return (&cstr[i]);
	return (lo);
}
