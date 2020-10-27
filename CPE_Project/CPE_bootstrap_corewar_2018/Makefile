##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

SRC		=	src/main.c			\

RM		=	rm -rf

CC		=	gcc

CFLAGS	=	-I./include -g3

NAME	=	yolotron-asm

OBJS	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean: 
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
