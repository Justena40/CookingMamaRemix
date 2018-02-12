##
## EPITECH PROJECT, 2018
## my_cook
## File description:
## makefile
##

CC	=	gcc

RM	=	rm -f

DIR_SRC	 =	src
DIR_OBJ	 =	$(DIR_SRC)/objects
DIR_MY	 =	$(DIR_SRC)/my
DIR_MENU =	$(DIR_SRC)/main_menu
DIR_HTP	 =	$(DIR_SRC)/how_to_play
DIR_SCN	 =	$(DIR_SRC)/init_scene
DIR_PAU  =	$(DIR_SRC)/pause_game

SRC	=	$(DIR_MENU)/menu.c			\
		$(DIR_MENU)/init_struct_menu.c		\
		$(DIR_MENU)/destroy_menu.c		\
		$(DIR_MENU)/draw_menu.c			\
		$(DIR_MENU)/event.c			\
		$(DIR_MENU)/manege_mouse_menu.c		\
		$(DIR_MENU)/main_menu.c			\
		$(DIR_SRC)/main.c			\
		$(DIR_HTP)/how_to_play.c		\
		$(DIR_HTP)/init_sprite_htp.c		\
		$(DIR_HTP)/draw_sprite_htp.c		\
		$(DIR_SCN)/button_init.c		\
		$(DIR_PAU)/pause.c			\
		$(DIR_PAU)/init_sprite_p.c		\
		$(DIR_PAU)/destroy_pause.c		\
		$(DIR_PAU)/draw_sprite_pause.c		\
		$(DIR_PAU)/event_pause.c		\
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
