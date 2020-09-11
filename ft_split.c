/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 09:52:37 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/13 09:15:55 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ncadenas(char const *s, char c)
{
	int		cadn;
	int		ichar;

	ichar = 0;
	cadn = 0;
	if (*s == 0)
		return (0);
	while (*s != 0)
	{
		if (*s == c)
			ichar = 0;
		else if (ichar == 0)
		{
			ichar = 1;
			cadn++;
		}
		s++;
	}
	return (cadn);
}

static int			cadlen(char const *cad, char c, int i)
{
	int	len;

	len = 0;
	while (cad[i] != c && cad[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char			**gen(char **tabla, int ncad, char c, char const *s)
{
	int		i;
	int		charit;
	int		cad;

	i = 0;
	cad = 0;
	charit = 0;
	while (s[i] != 0 && cad < ncad)
	{
		charit = 0;
		while (s[i] == c)
			i++;
		if (!(tabla[cad] = (char *)malloc(sizeof(char) * cadlen(s, c, i) + 1)))
			return (NULL);
		while (s[i] != 0 && s[i] != c)
			tabla[cad][charit++] = s[i++];
		tabla[cad][charit] = 0;
		cad++;
	}
	tabla[cad] = 0;
	return (tabla);
}

char				**ft_split(char const *s, char c)
{
	char	**tabla;
	int		ncad;

	if (s == NULL)
		return (NULL);
	ncad = ncadenas(s, c);
	if (!(tabla = (char**)malloc(sizeof(char*) * (ncad + 1))))
		return (NULL);
	return (gen(tabla, ncad, c, s));
}
