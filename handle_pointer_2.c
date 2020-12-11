/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:17:13 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 15:33:32 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_pointer_2(char *pointer, t_set set)
{
	int rtn_num;

	rtn_num = 0;
	rtn_num += handle_presicion("0x", 2);
	if (set.dot >= 0)
	{
		rtn_num += handle_width(set.dot, ft_strlen(pointer), 1);
		rtn_num += handle_presicion(pointer, set.dot);
	}
	else
		rtn_num += handle_presicion(pointer, ft_strlen(pointer));
	return (rtn_num);
}
