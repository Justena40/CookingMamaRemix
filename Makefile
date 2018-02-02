##
## EPITECH PROJECT, 2018
## my_cook
## File description:
## makefile
##

SRC	=	src/main_menu/menu.c			\
		src/main_menu/my_strcmp.c		\
		src/main_menu/display_usage.c		\
		src/main_menu/init_struct_menu.c	\
		src/main_menu/destroy_menu.c		\
		src/main_menu/draw_menu.c		\
		src/main_menu/main.c			\
		src/how_to_play/how_to_play.c		\
		src/how_to_play/init_sprite_htp.c	\
		src/pause_game/pause.c			\
		src/pause_game/init_sprite_p.c

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
