# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maneddam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 03:05:54 by maneddam          #+#    #+#              #
#    Updated: 2023/01/07 20:50:13 by maneddam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = src/push_swap.c src/error.c src/utils.c src/instructions.c src/sorting.c libft/ft_atoi.c printf/ft_printf.c printf/ft_putchar.c printf/ft_putnbr.c printf/ft_putnbr_add.c \
printf/ft_putnbr_u_dec.c printf/ft_putstr.c printf/ft_strlen.c libft/ft_split.c libft/ft_strjoin.c  libft/ft_strdup.c libft/ft_strchr.c \
libft/ft_strcmp.c libft/ft_strncmp.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;32m\n\nCompiling push_swap..."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "\n\033[1;32mDone !"

%.o: %.c
	@printf "\033[0;33mGenerating push_swap objects... %-100.900s\r" $@
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@echo "\033[0;31m\nDeleting objects..."
	@rm -f $(OBJ)
	@echo "\033[0m"

fclean:
	@echo "\033[0;31m\nDeleting objects..."
	@rm -f $(OBJ)
	@echo "\nDeleting executable..."
	@rm -f $(NAME)
	@echo "\033[0m"

re: fclean all
