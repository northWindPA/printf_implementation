/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:18:20 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 15:34:11 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_pointer_3(unsigned long long p, t_set set, int rtn_num)
{
	if (p == 0 && set.width != 0)
	{
		rtn_num += handle_width(set.width, 2, 0);
		return (rtn_num += handle_presicion("0x", 2));
	}
	else
	{
		rtn_num += handle_presicion("0x", 2);
		return (rtn_num += handle_width(set.width, 0, 1));
	}
	return (rtn_num);
}
