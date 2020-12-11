/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_int_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:08:25 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 15:08:33 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_int_3(char *str_i, long long int tmp_i, t_set set)
{
	int rtn_num;

	rtn_num = 0;
	if (tmp_i < 0 && set.dot >= 0)
		ft_putchar('-');
	if (set.dot >= 0)
		rtn_num += handle_width(set.dot - 1, ft_strlen(str_i) - 1, 1);
	rtn_num += handle_presicion(str_i, ft_strlen(str_i));
	return (rtn_num);
}
