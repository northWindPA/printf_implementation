/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_int_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:07:13 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 15:07:30 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_int_2(char *str_i, long long int tmp_i, t_set set)
{
	int rtn_num;

	rtn_num = 0;
	if (set.minus == 1)
		rtn_num += handle_int_3(str_i, tmp_i, set);
	if (set.dot >= 0 && (size_t)set.dot < ft_strlen(str_i))
		set.dot = ft_strlen(str_i);
	if (set.dot >= 0)
	{
		set.width -= set.dot;
		rtn_num += handle_width(set.width, 0, 0);
	}
	else
	{
		if (set.minus == 1 && set.zero == 1)
			rtn_num += handle_width(set.width, ft_strlen(str_i), 0);
		else
			rtn_num += handle_width(set.width, ft_strlen(str_i), set.zero);
	}
	if (set.minus == 0)
		rtn_num += handle_int_3(str_i, tmp_i, set);
	return (rtn_num);
}
