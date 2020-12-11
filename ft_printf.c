/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:10:06 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 15:25:43 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	const char	*format;
	int			rtn_num;

	rtn_num = 0;
	format = ft_strdup(str);
	va_start(ap, str);
	rtn_num += hub(format, ap);
	va_end(ap);
	free((char *)format);
	return (rtn_num);
}
