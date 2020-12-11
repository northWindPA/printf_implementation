/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:47:35 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 15:14:46 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_hex(unsigned int h, int flag, t_set set)
{
	char	*str_h;
	int		rtn_num;

	rtn_num = 0;
	h = (unsigned int)(4294967295 + 1 + h);
	if (set.dot == 0 && h == 0)
	{
		rtn_num += handle_width(set.width, 0, 0);
		return (rtn_num);
	}
	str_h = ft_hextoa((unsigned long long)h, 16);
	if (flag == 1)
		str_h = tolower_loop(str_h);
	rtn_num += handle_hex_2(str_h, set);
	free(str_h);
	return (rtn_num);
}
