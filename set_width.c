/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_width.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:16:20 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/09 17:41:28 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_set	set_width(va_list ap, t_set set)
{
	set.width = va_arg(ap, int);
	set.star = 1;
	if (set.width < 0)
	{
		set.width *= -1;
		set.minus = 1;
	}
	return (set);
}
