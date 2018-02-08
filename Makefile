##
## EPITECH PROJECT, 2018
## my_cook
## File description:
## makefile
##

CC	=	gcc

RM	=	rm -f

DIR_SRC	=	src
DIR_OBJ	=	$(DIR_SRC)/objects
DIR_MY	=	$(DIR_SRC)/my

SRC	=	src/main_menu/menu.c			\
		src/main_menu/init_struct_menu.c	\
		src/main_menu/destroy_menu.c		\
		src/main_menu/draw_menu.c		\
		src/main_menu/event.c			\
		$(DIR_SRC)/main.c			\
		src/how_to_play/how_to_play.c		\
		src/how_to_play/init_sprite_htp.c	\
		src/init_scene/button_init.c		\
		src/pause_game/pause.c			\
		src/pause_game/init_sprite_p.c		\
		src/pause_game/init_sprite_p.c		\
		$(DIR_MY)/my_putstr.c			\
		$(DIR_MY)/my_strlen.c			\
		$(DIR_MY)/my_strcmp.c			\
		$(DIR_OBJ)/button.c			\
		$(DIR_OBJ)/music.c			\
		$(DIR_OBJ)/object.c			\
		$(DIR_OBJ)/text.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_cook

CFLAGS	=	-g -I./include -I./include/objects

LDFLAGS	=	-lc_graph_prog

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
