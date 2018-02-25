/*
** EPITECH PROJECT, 2018
** scene.c
** File description:
** different scene are create
*/

#include "tools_cook.h"
#include "play_game.h"
#include "menu.h"
#include "pause.h"
#include "htp.h"
#include "scene.h"

int	init_scene(scene_t *i_menu, scene_t *i_pause, scene_t *i_htp,
	scene_m_t *i_game)
{
	if (all_init_pause(i_pause) == 84 || all_init_htp(i_htp) == 84 ||
	all_init_menu(&(i_menu->obj)) == 84 ||
	init_button_menu(&(i_menu->button)) == 84 ||
	init_button_pause(&(i_pause->button)) == 84 ||
	init_game_obj_catch(&(i_game->ingr)) == 84 ||
	init_game_obj_uncatch(&(i_game->obj)) == 84)
		return (ERROR);
	return (SUCCESS);
}
