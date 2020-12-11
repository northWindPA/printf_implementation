/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:25:43 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 16:01:38 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_int(long long int i, t_set set)
{
	char			*str_i;
	long long int	tmp_i;
	int				rtn_num;

	tmp_i = i;
	rtn_num = 0;
	if (set.dot == 0 && i == 0)
	{
		rtn_num += handle_width(set.width, 0, 0);
		return (rtn_num);
	}
	if (i < 0 && (set.dot >= 0 || set.zero == 1))
	{
		(set.zero == 1 && set.dot < 0) ? (handle_presicion("-", 1)) : 0;
		set.zero = 1;
		i *= -1;
		set.width--;
		rtn_num++;
	}
	str_i = ft_itoa(i);
	rtn_num += handle_int_2(str_i, tmp_i, set);
	free(str_i);
	return (rtn_num);
}
