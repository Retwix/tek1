##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## SBML
##

SRC	=	src/main.c 	\
		src/parser.c

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include -g3 -W -lncurses

NAME	=	SBMLparser

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all