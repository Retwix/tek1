##
## EPITECH PROJECT, 2018
## Makefile Day13
## File description:
## 
##

SRC	=	window.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libbtree.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean
	rm -f all
