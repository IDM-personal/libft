/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 13:26:33 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/11 09:32:42 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbo;
	char			dec;
	char			mod;

	if (n < 0)
	{
		write(fd, "-", 1);
		nbo = -1 * n;
	}
	else
		nbo = n;
	if (nbo > 9)
	{
		ft_putnbr_fd(nbo / 10, fd);
		mod = '0' + (nbo % 10);
		write(fd, &mod, 1);
	}
	else
	{
		dec = '0' + nbo;
		write(fd, &dec, 1);
	}
}
