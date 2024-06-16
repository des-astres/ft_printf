# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpierre- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 13:45:34 by lpierre-          #+#    #+#              #
#    Updated: 2024/06/11 13:45:38 by lpierre-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./ft_printf.c ./ft_putchar_mod.c ./ft_putstr_mod.c ./ft_putnbr_mod.c ./ft_putnbr_hexa.c ./ft_putnbr_unsigned.c ./ft_putptr.c ./print_args.c

HEADER = ./

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rcs

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEADER) $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
