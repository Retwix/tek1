##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 
##

SRC	=	my_getnbr.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		eval_expr.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	eval_expr

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(OBJ)

re:	fclean all
