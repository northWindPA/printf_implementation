/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:02:56 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/12/11 15:24:32 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

typedef	struct	s_set
{
	int			minus;
	int			zero;
	int			width;
	int			dot;
	int			star;
	int			type;
}				t_set;

t_set			new_set(void);
t_set			set_digit(char c, t_set set);
t_set			set_width(va_list ap, t_set set);

int				flags(int c);
int				types(int c);
int				ft_putchar(int c);
int				handle_percent(t_set set);
int				parser(const char *format, int i, t_set *set, va_list ap);
int				hub(const char *format, va_list ap);

int				handle_int(long long int i, t_set set);
int				handle_int_2(char *str_i, long long int tmp_i, t_set set);
int				handle_int_3(char *str_i, long long int tmp_i, t_set set);

int				handle_char(char c, t_set set);

int				handle_string(char *str, t_set set);
int				handle_string_2(char *str, t_set set);

int				handle_unsi(unsigned int u, t_set set);
int				handle_unsi_2(char *str_u, t_set set);
int				handle_unsi_3(char *str_u, t_set set);

int				handle_hex(unsigned int h, int flag, t_set set);
int				handle_hex_2(char *str_h, t_set set);
int				handle_hex_3(char *str_h, t_set set);

int				handle_pointer(unsigned long long p, t_set set);
int				handle_pointer_2(char *pointer, t_set set);
int				handle_pointer_3(unsigned long long p, t_set set, int rtn_num);

int				processor(int c, t_set set, va_list ap);
int				handle_width(int width, int len, int zero);
int				handle_presicion(char *str, int precision);
int				set_presicion(const char *format, int i, t_set *set,
																	va_list ap);

char			*tolower_loop(char *str);
char			*ft_utoa(unsigned int n);
char			*ft_hextoa(unsigned long long h, int base);

#endif
