/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** function menu
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <unistd.h>
#include "game.h"
#include "menu.h"
#include "tools_cook.h"

void	main_menu(scene_t *i_menu, sfRenderWindow **window, sfEvent *event,
		int *change_window)
{
	while (*change_window == MENU_RESTO) {
		while (sfRenderWindow_pollEvent(*window, event)) {
			analyse_events(event, window, change_window);
		}
		sfRenderWindow_clear(*window, sfBlack);
		draw_all_sprite(i_menu, *window);
		sfRenderWindow_display(*window);
	}
	destroy_all_menu(&i_menu);
}
