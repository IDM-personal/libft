/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 09:34:02 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/11 09:50:46 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*cad;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i] != 0)
		i++;
	if (!(cad = malloc(i + 1)))
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		cad[i] = f(i, s[i]);
		i++;
	}
	cad[i] = 0;
	return (cad);
}
