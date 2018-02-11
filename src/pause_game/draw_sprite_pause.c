/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** draw prite in the function pause
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include "scene.h"

void	draw_sprite_pause(scene_t *i_pause, sfRenderWindow *window)
{
	int count = 0;
	object_t *tmp = i_pause->obj;

	while (tmp != NULL) {
		sfSprite_setPosition(tmp->sprite, tmp->pos);
		sfRenderWindow_drawSprite(window, tmp->sprite, NULL);
		tmp = tmp->next;
	}
}
