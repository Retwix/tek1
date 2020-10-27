##
## EPITECH PROJECT, 2018
## My_runner
## File description:
## Makefile
##

SRC	=	main.c 	\
		ok.c

OBJ	=	$(SRC:.c=.o)

NAME	=	USNameFormatter

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
	rm -f $(OBJ)