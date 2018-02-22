/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** manege mouse ingredient
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "scene.h"
#include "tools_cook.h"
#include "play_game.h"

int	mouse_first_line(sfVector2i *mouse_ingr, scene_m_t *i_game, sfRenderWindow *window,
	int *bool)
{
	object_t *tmp = i_game->obj;

	if (mouse_ingr->x >= 600 && mouse_ingr->x <= 700
	    && mouse_ingr->y >= 50 && mouse_ingr->y <= 150 && bool == 0) {
/*		while (tmp && tmp->pos.x != 600 && tmp->pos.y != 50)
			tmp = tmp->next;
*/		*bool = 1;
	}
	else if (mouse_ingr->x >= 750 && mouse_ingr->x <= 850
		 && mouse_ingr->y >= 50 && mouse_ingr->y <= 150) {
	}
	else if (mouse_ingr->x >= 900 && mouse_ingr->x <= 1050
		 && mouse_ingr->y >= 50 && mouse_ingr->y <= 150) {
	}
	return (*bool);
}

void	mouse_second_line(sfVector2i *mouse_ingr)
{
	if (mouse_ingr->x >= 600 && mouse_ingr->y <= 700
	    && mouse_ingr->y >= 150 && mouse_ingr->y <= 250) {
	}
	else if (mouse_ingr->x >= 750 && mouse_ingr->x <= 850
		 && mouse_ingr->y >= 150 && mouse_ingr->y <= 250) {
	}
	else if (mouse_ingr->x >= 900 && mouse_ingr->x <= 1050
		 && mouse_ingr->y >= 150 && mouse_ingr->y <= 250) {
	}
}

void	mouse_third_line(sfVector2i *mouse_ingr)
{
	if (mouse_ingr->x >= 600 && mouse_ingr->x <= 700
	    && mouse_ingr->y >= 250 && mouse_ingr->y <= 350) {
		//texture = pos souris
	}
	else if (mouse_ingr->x >= 750 && mouse_ingr->x <= 850
		 && mouse_ingr->y >= 250 && mouse_ingr->y <= 350) {
	}
	else if (mouse_ingr->x >= 900 && mouse_ingr->x <= 1050
		 && mouse_ingr->y >= 250 && mouse_ingr->y <= 350) {
	}
}

void	manege_mouse_ingredient(sfMouseButtonEvent *event,
				sfRenderWindow *window, scene_m_t *i_game)
{
	sfVector2i mouse_ingr = sfMouse_getPositionRenderWindow(window);
	sfVector2f pos_mouse = {mouse_ingr.x, mouse_ingr.y};
	static int bool = 0;
	object_t *tmp = i_game->obj;

	if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue && bool == 0) {
		bool = mouse_first_line(&mouse_ingr, i_game, window, &bool);
		mouse_second_line(&mouse_ingr);
		mouse_third_line(&mouse_ingr);
	}
	else
		bool = 0;
	if (bool != 0)
		sfSprite_setPosition(tmp->sprite, pos_mouse);
}

//cheese
//dough
//egg
//pepe
//tomato
//bacon
//bread
//salad
//salad
