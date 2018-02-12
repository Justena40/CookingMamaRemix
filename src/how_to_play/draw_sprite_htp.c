/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** draw all spritre of htp
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <unistd.h>
#include "game.h"
#include "htp.h"

void	draw_sprite_htp(scene_t *i_htp, sfRenderWindow *window)
{
	int count = 0;
	object_t *tmp = i_htp->obj;

	while (tmp != NULL) {
		sfSprite_setPosition(tmp->sprite, tmp->pos);
		sfRenderWindow_drawSprite(window, tmp->sprite, NULL);
		tmp = tmp->next;
	}
}
