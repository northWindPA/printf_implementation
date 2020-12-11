/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:06:33 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 01:13:20 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_width(int width, int len, int zero)
{
	int rtn_num;

	rtn_num = 0;
	while (width - len > 0)
	{
		if (zero == 1)
			ft_putchar('0');
		else
			ft_putchar(' ');
		width--;
		rtn_num++;
	}
	return (rtn_num);
}
