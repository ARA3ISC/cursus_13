# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maneddam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 03:05:54 by maneddam          #+#    #+#              #
#    Updated: 2023/01/05 19:18:35 by maneddam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = push_swap.c error.c utils.c libft/ft_atoi.c printf/ft_printf.c printf/ft_putchar.c printf/ft_putnbr.c printf/ft_putnbr_add.c \
printf/ft_putnbr_u_dec.c printf/ft_putstr.c printf/ft_strlen.c libft/ft_split.c libft/ft_strjoin.c  libft/ft_strdup.c libft/ft_strchr.c \
libft/ft_strcmp.c libft/ft_strncmp.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
