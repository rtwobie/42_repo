CC = cc
NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -Iincludes

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
$(SRC):
		$(CC) $(CFLAGS) $(OBJ)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re
