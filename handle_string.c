/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:29:08 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 13:59:19 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_string(char *str, t_set set)
{
	int rtn_num;

	rtn_num = 0;
	if (!str)
		str = "(null)";
	if (set.dot >= 0 && (size_t)set.dot > ft_strlen(str))
		set.dot = ft_strlen(str);
	if (set.minus == 1)
		rtn_num += handle_string_2(str, set);
	if (set.dot >= 0)
		rtn_num += handle_width(set.width, set.dot, 0);
	else
	{
		if (set.dot == -1 && set.width > 0 && set.zero == 1)
			rtn_num += handle_width(set.width, ft_strlen(str), 1);
		else
			rtn_num += handle_width(set.width, ft_strlen(str), 0);
	}
	if (set.minus == 0)
		rtn_num += handle_string_2(str, set);
	return (rtn_num);
}
