/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** draw sprite and buttun of the game
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include "scene.h"
#include "play_game.h"

void	draw_sprite_game(scene_t *i_game, sfRenderWindow *window)
{
	object_t *tmp = i_game->obj;

	while (tmp != NULL) {
//		sfSprite_setPosition(tmp->sprite, tmp->pos);
		sfRenderWindow_drawSprite(window, tmp->sprite, NULL);
		tmp = tmp->next;
	}
}
