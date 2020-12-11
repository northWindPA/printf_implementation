/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_presicion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:13:23 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 14:52:11 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_presicion(char *str, int precision)
{
	int rtn_num;

	rtn_num = 0;
	while (str[rtn_num] && rtn_num < precision)
	{
		ft_putchar(str[rtn_num]);
		rtn_num++;
	}
	return (rtn_num);
}
