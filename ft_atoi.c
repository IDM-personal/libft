/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 11:24:32 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/13 12:39:54 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long unsigned int		nbrcreator(int i, int len, char *str)
{
	long unsigned int	rtr;
	int					nbrpos;
	int					nbr;

	rtr = 0;
	while (i != len)
	{
		nbr = str[i++] - '0';
		nbrpos = i;
		while (nbrpos < len)
		{
			nbr *= 10;
			nbrpos++;
		}
		rtr += nbr;
	}
	return (rtr);
}

static int						negat(char ch)
{
	if (ch == 45)
		return (1);
	if (ch == 43)
		return (-1);
	return (0);
}

static int						off(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\t' || str[i] == '\n' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
	{
		while (str[i++] != 0)
		{
			if (str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			{
				i++;
			}
			else
				break ;
		}
		return (i);
	}
	return (0);
}

static int						retorna(int negatval, int len, int i, char *str)
{
	int of;

	of = off(str);
	if (len == 0 && ft_strlen(str) == 0)
		return (0);
	if (negatval == 1)
		i = negatval + of;
	if (negatval == 1)
		return (nbrcreator(i, (len + i), str)) * -1;
	i = (negatval * -1) + of;
	if (negatval == -1)
		return (nbrcreator(i, (len + i), str));
	return (nbrcreator(i, len + i + 1, str));
}

int								ft_atoi(const char *str)
{
	int		i;
	int		len;
	int		nw;
	char	*cstr;

	cstr = (char*)str;
	i = off(cstr);
	len = 0;
	nw = 0;
	while (cstr[i++] != 0)
		if ((cstr[off(cstr)] >= 48 && cstr[off(cstr)] <= 57)\
		|| cstr[off(cstr)] == 45 || cstr[off(cstr)] == 43)
		{
			while (cstr[i] != 0 && nw == 0)
			{
				if (cstr[i] >= 48 && cstr[i] <= 57)
					len++;
				else
					nw = 1;
				i++;
			}
		}
		else
			return (0);
	return (retorna(negat(cstr[off(cstr)]), len, i, cstr));
}
