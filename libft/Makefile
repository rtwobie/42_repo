NAME = libft.a
CC = cc
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

test:
	$(CC) $(CFLAGS) main.c -L. -lft -o testing.out

tclean:
	rm testing.out

retest:
	make re
	make clean
	make test

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	make fclean
	make all

.PHONY: all clean fclean re
