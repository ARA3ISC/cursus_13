NAME=so_long
CC=cc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC = main.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c libft/ft_split.c libft/ft_strlen.c libft/ft_calloc.c
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -lmlx -framework OpenGL -framework AppKit  -o $(NAME)

clean:
		$(RM) $(OBJ)
fclean: clean
		$(RM) $(NAME)

re: fclean all
