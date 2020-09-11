/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 05:57:42 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/13 09:16:13 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*nbrlen(long n)
{
	int		res;
	char	*cad;

	res = 0;
	if (n < 0)
	{
		res++;
		n *= -1;
	}
	while (n / 10 > 0)
	{
		res++;
		n = n / 10;
	}
	if (!(cad = (char*)ft_calloc(1, res + 2)))
		return (NULL);
	return (cad);
}

static char		*ft_rev(char *cad)
{
	int		i;
	char	sv;
	int		len;

	len = ft_strlen(cad);
	i = 0;
	while (i < (len / 2))
	{
		sv = cad[i];
		cad[i] = cad[len - i - 1];
		cad[len - i - 1] = sv;
		i++;
	}
	return (cad);
}

char			*ft_itoa(int n)
{
	char			*cad;
	int				i;
	unsigned int	nb;

	nb = n;
	i = 0;
	if (!(cad = nbrlen((n))))
		return (NULL);
	if (n < 0)
		nb = n * -1;
	while (nb / 10 > 0)
	{
		cad[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	cad[i++] = nb + '0';
	if (n < 0)
		cad[i++] = '-';
	return (ft_rev(cad));
}
