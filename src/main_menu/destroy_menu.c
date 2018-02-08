/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** destroy sprite
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "menu.h"
#include "scene.h"

void	destroy_all_menu(scene_t **i_menu)
{
	scene_t	*tmp = *i_menu;

	while (tmp->obj != NULL) {
		sfSprite_destroy((*i_menu)->obj->sprite);
		sfTexture_destroy((*i_menu)->obj->texture);
		tmp->obj = tmp->obj->next;
		free((*i_menu)->obj);
		(*i_menu)->obj = tmp->obj;
	}
	free((*i_menu)->obj);
}
