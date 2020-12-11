/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsi_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:53:28 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 13:53:41 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_unsi_2(char *str_u, t_set set)
{
	int rtn_num;

	rtn_num = 0;
	if (set.minus == 1)
		rtn_num += handle_unsi_3(str_u, set);
	if (set.dot >= 0 && (size_t)set.dot < ft_strlen(str_u))
		set.dot = ft_strlen(str_u);
	if (set.dot >= 0)
	{
		set.width -= set.dot;
		rtn_num += handle_width(set.width, 0, 0);
	}
	else
		rtn_num += handle_width(set.width,
		ft_strlen(str_u), set.zero);
	if (set.minus == 0)
		rtn_num += handle_unsi_3(str_u, set);
	return (rtn_num);
}
