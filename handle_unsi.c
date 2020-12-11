/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:36:22 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 13:57:16 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_unsi(unsigned int u, t_set set)
{
	char	*str_u;
	int		rtn_num;

	rtn_num = 0;
	u = (unsigned int)(4294967295 + 1 + u);
	if (set.dot == 0 && u == 0)
	{
		rtn_num += handle_width(set.width, 0, 0);
		return (rtn_num);
	}
	str_u = ft_utoa(u);
	rtn_num += handle_unsi_2(str_u, set);
	free(str_u);
	return (rtn_num);
}
