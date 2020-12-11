/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:16:38 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 01:10:57 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		handle_percent(t_set set)
{
	int rtn_num;

	rtn_num = 0;
	if (set.minus == 1)
	{
		rtn_num += handle_presicion("%", 1);
		rtn_num += handle_width(set.width, 1, set.zero);
	}
	else if (set.minus == 0)
	{
		rtn_num += handle_width(set.width, 1, set.zero);
		rtn_num += handle_presicion("%", 1);
	}
	return (rtn_num);
}
