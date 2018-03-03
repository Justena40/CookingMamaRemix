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
#include "play_game.h"
#include "htp.h"
#include "pause.h"
#include "scene.h"

void	destroy_all_menu(scene_t **i_menu)
{
	scene_t	*tmp = *i_menu;

	while (tmp->obj != NULL) {
		sfSprite_destroy((*i_menu)->obj->sprite);
		sfTexture_destroy((*i_menu)->obj->texture);
		tmp->obj = tmp->obj->next;
		(*i_menu)->obj = tmp->obj;
	}
}

void	destroy_all(all_scene_t **scenes, window_t *wind)
{
	destroy_all_htp(&((*scenes)->i_htp));
	destroy_all_pause(&((*scenes)->i_pause));
	destroy_all_menu(&((*scenes)->i_menu));
	destroy_all_game(&((*scenes)->i_game));
	sfMusic_destroy(wind->music);
	sfMusic_destroy(wind->music_game);
	sfMusic_destroy(wind->bad_m);
	sfRenderWindow_destroy(wind->window);
}
