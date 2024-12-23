##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## task 1
##

CC	=	gcc

SRC	=	main.c	\
		count_lines_columns.c \
		rush1.c

OBJ	=	$(SRC:.c=.o)

NAME	=	rush3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) -Llib/my -lmy -o $(NAME)

clean: all
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
