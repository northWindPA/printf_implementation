/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:20:38 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 15:20:44 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parser(const char *format, int i, t_set *set, va_list ap)
{
	while (format[i])
	{
		if (format[i] == '-')
			set->minus = 1;
		if (format[i] == '0' && set->width == 0 && set->minus == 0)
			set->zero = 1;
		if (format[i] == '*')
			*set = set_width(ap, *set);
		if (format[i] == '.')
			i = set_presicion(format, i, set, ap);
		if (ft_isdigit(format[i]))
			*set = set_digit(format[i], *set);
		if (types(format[i]))
		{
			set->type = format[i];
			break ;
		}
		if (!ft_isdigit(format[i]) && !types(format[i]) && !flags(format[i]))
			break ;
		i++;
	}
	return (i);
}
