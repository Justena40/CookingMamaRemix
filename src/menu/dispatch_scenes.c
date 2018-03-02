/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** menu of the game
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "tools_cook.h"
#include "menu.h"
#include "htp.h"
#include "pause.h"
#include "play_game.h"

static int	dispatch_scene(all_scene_t *scenes, window_t wind)
{
	if (scenes->change_window == MENU_RESTO)
		main_menu(scenes, &wind);
	else if (scenes->change_window == HTP)
		how_to_play(scenes, &wind);
	else if (scenes->change_window == GAME) {
		if (game(scenes, &wind) == ERROR)
			return (ERROR);
	}
	return (SUCCESS);
}

int	menu(void)
{
	all_scene_t *scenes = malloc(sizeof(all_scene_t));
	window_t wind;

	if (init_window(&wind, scenes) == ERROR)
		return (ERROR);
	sfText_setString(wind.score_order, wind.tab_score);
	while (sfRenderWindow_isOpen(wind.window)) {
		if (dispatch_scene(scenes, wind) == ERROR)
			return (ERROR);
	}
	destroy_all(&scenes, &wind);
	return (SUCCESS);
}
