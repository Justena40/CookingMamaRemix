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

int	menu(void)
{
	all_scene_t *scenes = malloc(sizeof(all_scene_t));
	window_t wind;

	if (init_window(&wind, scenes) == ERROR)
		return (ERROR);
	while (sfRenderWindow_isOpen(wind.window)) {
//		if (scenes->change_window == PAUSE)
//			pause_game(scenes, &wind);
		if (scenes->change_window == MENU_RESTO) {
			main_menu(scenes, &wind);
		}
		else if (scenes->change_window == HTP) {
			how_to_play(scenes, &wind);
		}
		else if (scenes->change_window == GAME)
			game(scenes, &wind);
	}
	destroy_all(&scenes, &wind);
	return (SUCCESS);
}
