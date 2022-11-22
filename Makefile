##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC	=	\
		sources/main.c	\
		sources/init_thief.c	\
		sources/my_putstr.c	\
		sources/my_putchar.c	\
		sources/window.c

OBJ = $(SRC:.c=.o)

NAME = my_runner

CFLAGS = -Wall -Wextra -Iincludes

all: $(NAME) clean

$(NAME): $(OBJ)
		gcc -o $(NAME) $(OBJ) -lcsfml-system -lcsfml-window -lcsfml-graphics
clean:
	rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

debug: CFLAGS += -g

debug: re

re: fclean all