##
## EPITECH PROJECT, 2019
## my_ls
## File description:
## Makefile
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	info_file

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all