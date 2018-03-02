/*
** EPITECH PROJECT, 2018
** scene.c
** File description:
** different scene are create
*/

#include <stdlib.h>
#include "tools_cook.h"
#include "play_game.h"
#include "menu.h"
#include "pause.h"
#include "htp.h"
#include "scene.h"

int	init_scene(scene_t *i_menu, scene_t *i_pause, scene_t *i_htp,
	scene_m_t *i_game)
{
	if (all_init_pause(&(i_pause->obj)) == 84 ||
	all_init_htp(&(i_htp->obj)) == 84 ||
	all_init_menu(&(i_menu->obj)) == 84 ||
	init_button_menu(&(i_menu->button)) == 84 ||
	init_button_pause(&(i_pause->button)) == 84 ||
	init_game_obj_catch(&(i_game->ingr)) == 84 ||
	init_game_obj_uncatch(&(i_game->obj)) == 84 ||
	init_game_obj_menu_cart(&(i_game->menu_cart)) == 84)
		return (ERROR);
	return (SUCCESS);
}

int	init_scene_menu(all_scene_t *scenes)
{
	scenes->i_menu = malloc(sizeof(scene_t));
	scenes->i_pause = malloc(sizeof(scene_t));
	scenes->i_htp = malloc(sizeof(scene_t));
	scenes->i_game = malloc(sizeof(scene_m_t));

	if (scenes->i_menu == MALLOC_ERROR || scenes->i_pause == MALLOC_ERROR ||
	scenes->i_htp == MALLOC_ERROR || scenes->i_game == MALLOC_ERROR)
		return (ERROR);
	if (init_scene(scenes->i_menu, scenes->i_pause,
		scenes->i_htp, scenes->i_game) == ERROR)
		return (ERROR);
	scenes->change_window = MENU_RESTO;
	return (SUCCESS);
}

void	init_score(window_t *wind)
{
	wind->score_font = sfFont_createFromFile(SCORE_F);
	wind->score_order = sfText_create();
	sfText_setFont(wind->score_order, wind->score_font);
	sfText_setCharacterSize(wind->score_order, 50);
	sfText_setColor(wind->score_order, sfBlack);
	(wind->tab_score)[0] = '0';
	(wind->tab_score)[1] = '0';
	(wind->tab_score)[2] = '\0';
	wind->pos_score.x = 260;
	wind->pos_score.y = 390;
}

int	init_window(window_t *wind, all_scene_t *scenes)
{
	sfVideoMode mode = {1080, 720, 32};

	if (init_scene_menu(scenes) == ERROR)
		return (ERROR);
	init_score(wind);
	wind->window = sfRenderWindow_create(mode, "MY_COOK",
					sfResize | sfClose, NULL);
	sfRenderWindow_setFramerateLimit(wind->window, 60);
	if (!wind->window)
		return (ERROR);
	wind->music = sfMusic_createFromFile(MENU_A);
	if (!wind->music)
		return (ERROR);
	wind->music_game = sfMusic_createFromFile(GAME_A);
	if (!wind->music_game)
		return (ERROR);
	return (SUCCESS);
}
