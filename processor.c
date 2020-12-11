/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:57:26 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/10 14:22:35 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	processor(int c, t_set set, va_list ap)
{
	int rtn_num;

	rtn_num = 0;
	if (c == 'c')
		rtn_num = handle_char(va_arg(ap, int), set);
	else if (c == 's')
		rtn_num = handle_string(va_arg(ap, char *), set);
	else if (c == 'd' || c == 'i')
		rtn_num = handle_int(va_arg(ap, int), set);
	else if (c == 'u')
		rtn_num += handle_unsi((unsigned int)va_arg(ap, unsigned int), set);
	else if (c == 'x')
		rtn_num += handle_hex(va_arg(ap, unsigned int), 1, set);
	else if (c == 'X')
		rtn_num += handle_hex(va_arg(ap, unsigned int), 0, set);
	else if (c == 'p')
		rtn_num += handle_pointer(va_arg(ap, unsigned long long), set);
	else if (c == '%')
		rtn_num += handle_percent(set);
	return (rtn_num);
}
