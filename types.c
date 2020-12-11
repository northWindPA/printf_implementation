/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:56:10 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 19:50:29 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

int	types(int c)
{
	int		i;
	char	*types;

	i = 0;
	types = "diucsxXp%";
	while(types[i] !='\0')
	{
		if(c == (int)types[i])
			return (1);
		i++;
	}
	return (0);
}
