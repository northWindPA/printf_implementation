/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hub.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:24:12 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 15:25:02 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hub(const char *format, va_list ap)
{
	t_set	set;
	int		i;
	int		rtn_num;

	i = 0;
	rtn_num = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			set = new_set();
			i = parser(format, i, &set, ap);
			if (types(format[i]))
				rtn_num += processor(set.type, set, ap);
			else if (format[i])
				rtn_num += ft_putchar(format[i]);
		}
		else if (format[i] != '%')
			rtn_num += ft_putchar(format[i]);
		i++;
	}
	return (rtn_num);
}
