##
## EPITECH PROJECT, 2018
## my_cook
## File description:
## makefile
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_cook

CFLAGS	=	-g -I./include

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
