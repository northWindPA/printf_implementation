/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_presicion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:18:18 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 16:18:41 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	set_presicion(const char *format, int i, t_set *set, va_list ap)
{
	i++;
	if (format[i] == '*')
	{
		set->dot = va_arg(ap, int);
		i++;
	}
	else
	{
		set->dot = 0;
		while (ft_isdigit(format[i]))
		{
			set->dot = (set->dot * 10) + (format[i] - '0');
			i++;
		}
	}
	return (i);
}
