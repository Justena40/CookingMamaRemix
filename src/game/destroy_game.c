/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** destroy all sprite of the game
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "scene.h"
#include "play_game.h"

void	destroy_all_game(scene_t **i_game)
{
	object_t *tmp = (*i_game)->obj;
	object_t *obj_tmp = NULL;

	while (tmp != NULL) {
		obj_tmp = tmp;
		tmp = tmp->next;
		sfSprite_destroy(obj_tmp->sprite);
		sfTexture_destroy(obj_tmp->texture);
		free(obj_tmp);
	}
	free(tmp);
}
