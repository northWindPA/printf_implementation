/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:13:56 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 15:14:14 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_hex_2(char *str_h, t_set set)
{
	int rtn_num;

	rtn_num = 0;
	if (set.minus == 1)
		rtn_num += handle_hex_3(str_h, set);
	if (set.dot >= 0 && (size_t)set.dot < ft_strlen(str_h))
		set.dot = ft_strlen(str_h);
	if (set.dot >= 0)
	{
		set.width -= set.dot;
		rtn_num += handle_width(set.width, 0, 0);
	}
	else
		rtn_num += handle_width(set.width, ft_strlen(str_h), set.zero);
	if (set.minus == 0)
		rtn_num += handle_hex_3(str_h, set);
	return (rtn_num);
}
