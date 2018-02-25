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

void	destroy_all(scene_t **i_htp, scene_t **i_pause,
		scene_t **i_menu, scene_m_t **i_game)
{
	destroy_all_htp(i_htp);
	destroy_all_pause(i_pause);
	destroy_all_menu(i_menu);
	destroy_all_game(i_game);
}
