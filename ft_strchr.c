/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 10:38:08 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/12 13:13:55 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int		ch;
	int		i;
	char	*cstr;

	cstr = (char*)str;
	i = 0;
	ch = c;
	while (cstr[i] != 0)
	{
		if (cstr[i] == ch)
			return (&cstr[i]);
		i++;
	}
	if (cstr[i] == ch)
		return (&cstr[i]);
	return (0);
}
