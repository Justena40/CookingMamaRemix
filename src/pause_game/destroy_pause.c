/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** destroy all sprite of pause function
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "scene.h"

void	destroy_all_pause(scene_t **i_pause)
{
	scene_t *tmp = *i_pause;

	while (tmp->obj != NULL) {
		sfSprite_destroy((*i_pause)->obj->sprite);
		sfTexture_destroy((*i_pause)->obj->texture);
		tmp->obj = tmp->obj->next;
		(*i_pause)->obj = tmp->obj;
	}
}
