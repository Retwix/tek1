##
## EPITECH PROJECT, 2018
## My_runner
## File description:
## Makefile
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_exec

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
	rm -f $(OBJ)