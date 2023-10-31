CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = libmy
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@.a $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

re: fclean all

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean