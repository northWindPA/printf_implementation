/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:59:02 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 13:59:09 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_string_2(char *str, t_set set)
{
	int rtn_num;

	rtn_num = 0;
	if (set.dot >= 0)
	{
		rtn_num += handle_width(set.dot, ft_strlen(str), 0);
		rtn_num += handle_presicion(str, set.dot);
	}
	else
	{
		rtn_num += handle_presicion(str, ft_strlen(str));
	}
	return (rtn_num);
}
