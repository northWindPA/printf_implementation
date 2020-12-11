/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:36:21 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/09 17:41:09 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_set	new_set(void)
{
	t_set		set;

	set.minus = 0;
	set.zero = 0;
	set.width = 0;
	set.dot = -1;
	set.star = 0;
	set.type = 0;
	return (set);
}
