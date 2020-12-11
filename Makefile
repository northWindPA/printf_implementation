# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhumfrey <mhumfrey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/10 14:08:05 by mhumfrey          #+#    #+#              #
#    Updated: 2020/12/11 15:25:35 by mhumfrey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_printf.c \
		ft_hextoa.c \
		flags.c \
		ft_putchar.c \
		ft_utoa.c \
		parser.c \
		hub.c \
		handle_char.c \
		handle_hex.c \
		handle_hex_2.c \
		handle_hex_3.c \
		handle_int.c \
		handle_int_2.c \
		handle_int_3.c \
		handle_percent.c \
		handle_pointer.c \
		handle_pointer_2.c \
		handle_pointer_3.c \
		handle_presicion.c \
		handle_string.c \
		handle_string_2.c \
		handle_unsi.c \
		handle_unsi_2.c \
		handle_unsi_3.c \
		handle_width.c \
		new_set.c \
		processor.c \
		set_digit.c \
		set_presicion.c \
		set_width.c \
		tolower_loop.c \
		types.c

PFOBJS = ft_printf.o \
		ft_hextoa.o \
		flags.o \
		ft_putchar.o \
		ft_utoa.o \
		parser.o \
		hub.o \
		handle_char.o \
		handle_hex.o \
		handle_hex_2.o \
		handle_hex_3.o \
		handle_int.o\
		handle_int_2.o\
		handle_int_3.o\
		handle_percent.o \
		handle_pointer.o\
		handle_pointer_2.o\
		handle_pointer_3.o\
		handle_presicion.o\
		handle_string.o \
		handle_string_2.o \
		handle_unsi.o \
		handle_unsi_2.o \
		handle_unsi_3.o \
		handle_width.o\
		new_set.o \
		processor.o \
		set_digit.o \
		set_presicion.o \
		set_width.o \
		tolower_loop.o \
		types.o

LIBFT = libft/libft.a

NAME = libftprintf.a

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I ft_printf.h

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	gcc $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(PFOBJS)
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all
