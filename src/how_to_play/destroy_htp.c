/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** destroy sprite in the htp function
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "scene.h"
#include "htp.h"

void	destroy_all_htp(scene_t **i_htp)
{
	object_t *tmp = (*i_htp)->obj;
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
