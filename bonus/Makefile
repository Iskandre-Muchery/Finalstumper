##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## task 1
##

CC	=	gcc

SRC	=	shapes_V.c

OBJ	=	$(SRC:.c=.o)

all:		$(OBJ)
	gcc $(OBJ) -L../lib/my -lmy -o rush1-1
	gcc $(OBJ) -L../lib/my -lmy -o rush1-2
	gcc $(OBJ) -L../lib/my -lmy -o rush1-3
	gcc $(OBJ) -L../lib/my -lmy -o rush1-4
	gcc $(OBJ) -L../lib/my -lmy -o rush1-5

clean: all
	rm -f $(OBJ)

fclean: clean
	rm -f rush1-1
	rm -f rush1-2
	rm -f rush1-3
	rm -f rush1-4
	rm -f rush1-5

re: fclean all
