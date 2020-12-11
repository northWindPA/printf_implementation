/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:55:50 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/10 01:00:14 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*handle_base(unsigned long long tmp_h, int base, char *str_h, int place)
{
	while (tmp_h != 0)
	{
		if ((tmp_h % base) < 10)
			str_h[place - 1] = (tmp_h % base) + 48;
		else
			str_h[place - 1] = (tmp_h % base) + 55;
		tmp_h /= base;
		place--;
	}
	return (str_h);
}

char	*ft_hextoa(unsigned long long h, int base)
{
	char				*str_h;
	int					place;
	unsigned long long	tmp_h;

	str_h = 0;
	place = 0;
	tmp_h = h;
	if (h == 0)
		return (ft_strdup("0"));
	while (h != 0)
	{
		h /= base;
		place++;
	}
	if (!(str_h = malloc(sizeof(char) * (place + 1))))
		return (0);
	str_h[place] = '\0';
	str_h = handle_base(tmp_h, base, str_h, place);
	return (str_h);
}
