/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:49:10 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 15:34:48 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_pointer(unsigned long long p, t_set set)
{
	int		rtn_num;
	char	*pointer;

	rtn_num = 0;
	if (p == 0 && set.dot == 0)
	{
		return (rtn_num += handle_pointer_3(p, set, rtn_num));
	}
	pointer = ft_hextoa(p, 16);
	pointer = tolower_loop(pointer);
	if ((size_t)set.dot < ft_strlen(pointer))
		set.dot = ft_strlen(pointer);
	if (set.minus == 1)
		rtn_num += handle_pointer_2(pointer, set);
	rtn_num += handle_width(set.width, ft_strlen(pointer) + 2, 0);
	if (set.minus == 0)
		rtn_num += handle_pointer_2(pointer, set);
	free(pointer);
	return (rtn_num);
}
