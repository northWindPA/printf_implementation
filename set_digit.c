/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_digit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:03:30 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/09 17:41:43 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_set	set_digit(char c, t_set set)
{
	if (set.star == 1)
		set.width = 0;
	set.width = (set.width * 10) + (c - '0');
	return (set);
}
