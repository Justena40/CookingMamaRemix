/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** menu of the game
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <unistd.h>
#include "game.h"
#include "menu.h"
#include "htp.h"
#include "pause.h"
#include "play_game.h"

void	menu(void)
{
	scene_t *i_menu = malloc(sizeof(scene_t));
	scene_t *i_pause = malloc(sizeof(scene_t));
	scene_t *i_htp = malloc(sizeof(scene_t));
	scene_m_t *i_game = malloc(sizeof(scene_t));
	button_t *tmp = NULL;
	sfVideoMode mode = {1080, 720, 32};
	sfRenderWindow *window;
	sfEvent event;
	int change_window = MENU_RESTO;

	if (all_init_pause(i_pause) == 84 || all_init_htp(i_htp) == 84 ||
	init_game_obj_catch(&(i_game->ingr)) == 84 ||
	init_game_obj_uncatch(&(i_game->obj)) == 84 ||
	all_init_menu(&(i_menu->obj)) == 84 ||
	init_button_menu(&(i_menu->button)) == 84 ||
	init_button_pause(&(i_pause->button)) == 84)
		return;
	window = sfRenderWindow_create(mode, "MY_COOK",
				       sfResize | sfClose, NULL);
	sfRenderWindow_setFramerateLimit(window, 60);
	if (window == 0)
		return;
	while (sfRenderWindow_isOpen(window)) {
		if (change_window == PAUSE)
			pause_game(i_pause, &window, &event, &change_window);
		else if (change_window == MENU_RESTO) {
			main_menu(i_menu, &window, &event, &change_window);
		}
		else if (change_window == HTP) {
			how_to_play(i_htp, &window, &event, &change_window);
		}
		else if (change_window = GAME)
			game(i_game, &window, &event, &change_window);
	}
	destroy_all(&i_htp, &i_pause, &i_menu, &i_game);
	sfRenderWindow_destroy(window);
}
