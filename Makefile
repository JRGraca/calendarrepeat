NAME = calendar.a

SRC = calendar.c is_odd.c dayoftheweek.c

CC = gcc

CFLAG = -Werror -Wall -Wextra

AR = ar rcs

OBJ = $(SRC:.c=.o)

%.c: %.o
	$(CC) -o $(SRC)

$(NAME): $(OBJ)
	$(AR) $(OBJ) $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re
