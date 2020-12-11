/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:04:57 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 13:49:50 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_char(char c, t_set set)
{
	int rtn_num;

	rtn_num = 0;
	if (set.minus == 1)
	{
		ft_putchar(c);
		rtn_num = handle_width(set.width, 1, 0);
	}
	else if (set.minus == 0)
	{
		rtn_num = handle_width(set.width, 1, 0);
		ft_putchar(c);
	}
	return (rtn_num + 1);
}
