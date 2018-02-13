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
	scene_t *i_game = malloc(sizeof(scene_t));
	button_t *tmp = NULL;
	sfVideoMode mode = {1080, 720, 32};
	int res = 0;
	int res2 = 0;
	sfRenderWindow *window;
	sfEvent event;
	int change_window = MENU_RESTO;

	window = sfRenderWindow_create(mode, "MY_COOK",
				       sfResize | sfClose, NULL);
	sfRenderWindow_setFramerateLimit(window, 60);
	res = all_init_menu(&(i_menu->obj));
	res2 = init_button_menu(&(i_menu->button));
	if (window == 0 || res == 84)
		return;
	if (all_init_pause(i_pause) == 84 || all_init_htp(i_htp) == 84 ||
	all_init_game(i_game) == 84)
		return;
	change_window = MENU_RESTO;
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
	sfRenderWindow_destroy(window);
}
