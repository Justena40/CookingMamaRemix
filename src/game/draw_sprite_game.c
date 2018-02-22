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

void	draw_sprite_game(scene_m_t *i_game, sfRenderWindow *window)
{
	object_t *tmp = i_game->obj;
	object_t *tmp2 = i_game->ingr;

	while (tmp != NULL) {
		sfRenderWindow_drawSprite(window, tmp->sprite, NULL);
		tmp = tmp->next;
	}
	while (tmp2 != NULL) {
		sfRenderWindow_drawSprite(window, tmp2->sprite, NULL);
		tmp2 = tmp2->next;
	}
}
