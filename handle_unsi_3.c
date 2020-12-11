/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsi_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:54:47 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 13:54:58 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_unsi_3(char *str_u, t_set set)
{
	int rtn_num;

	rtn_num = 0;
	if (set.dot >= 0)
		rtn_num += handle_width(set.dot - 1, ft_strlen(str_u) - 1, 1);
	rtn_num += handle_presicion(str_u, ft_strlen(str_u));
	return (rtn_num);
}
