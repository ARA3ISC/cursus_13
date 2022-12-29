# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maneddam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 03:05:54 by maneddam          #+#    #+#              #
#    Updated: 2022/12/29 15:41:16 by maneddam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftft_printf.a
CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = ft_putchar.c ft_putnbr_u_dec.c ft_putnbr.c ft_putstr.c ft_strlen.c ft_ft_printf.c ft_putnbr_add.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
