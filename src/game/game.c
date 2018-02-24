/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** main function of the game
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <unistd.h>
#include "game.h"
#include "play_game.h"

void	game(scene_m_t *i_game, sfRenderWindow **window, sfEvent *event,
	     int *change_window)
{
	sfClock	*clock = sfClock_create();
	sfTime	time;
	menu_t tab_menu[4];
	int	second = 0;

	create_tab_menu(tab_menu);
	while (*change_window == GAME) {
		while (second < END_TIMER) {
			time = sfClock_getElapsedTime(clock);
			second = time.microseconds / 1000000;
			while (sfRenderWindow_pollEvent(*window, event)) {
				analyse_event_game(event, window, change_window, i_game);
				if (!sfRenderWindow_isOpen(*window))
					second = END_TIMER;
			}
			sfRenderWindow_clear(*window, sfBlack);
			draw_sprite_game(i_game, *window);
			sfRenderWindow_display(*window);
			timer_game(event, window, i_game, tab_menu);
		}
		*change_window = MENU_RESTO;
	}
	sfClock_destroy(clock);
}
