/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:13:57 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 15:14:28 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_hex_3(char *str_h, t_set set)
{
	int rtn_num;

	rtn_num = 0;
	if (set.dot >= 0)
		rtn_num += handle_width(set.dot - 1, ft_strlen(str_h) - 1, 1);
	rtn_num += handle_presicion(str_h, ft_strlen(str_h));
	return (rtn_num);
}
