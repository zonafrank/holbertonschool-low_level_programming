CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = school
RM = rm -f

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