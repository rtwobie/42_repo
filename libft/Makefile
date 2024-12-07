NAME = libft.a
HEADER = libft.h
CC = gcc
SRC = $(wildcard ft_*.c)
BASE_SRC = $(filter-out ft_lst*.c, $(SRC))
BONUS_SRC = $(wildcard ft_lst*.c)
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(SRC:.c=.o) $(BONUS_SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

bonus: $(BONUS_OBJ)
	ar rc $(NAME) $(BONUS_OBJ)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	make fclean
	make all

.PHONY: all clean fclean re bonus
