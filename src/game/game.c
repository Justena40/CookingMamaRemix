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
#include "play_game.h"

static void	time_elapse(int *second, sfTime time, sfClock *clock,
	int *change_window)
{
	if (*second >= END_TIMER) {
		*second = 0;
		*change_window = MENU_RESTO;
	}
	time = sfClock_getElapsedTime(clock);
	*second = time.microseconds / 1000000;
}

void	game(all_scene_t *scenes, window_t *wind)
{
	sfClock *clock = sfClock_create();
	sfTime time;
	menu_t tab_menu[4];
	static int second = 0;

//	sfMusic_play(wind->music_game);
	create_tab_menu(tab_menu);
	while (scenes->change_window == GAME) {
		time_elapse(&second, time, clock, &(scenes->change_window));
		analyse_event_game(&(wind->event), &(wind->window),
				&(scenes->change_window), &second);
		sfRenderWindow_clear(wind->window, sfBlack);
		draw_sprite_game(scenes->i_game, wind->window);
		sfRenderWindow_display(wind->window);
		timer_game(wind, scenes, tab_menu, &second);
	}
	sfClock_destroy(clock);
//	sfMusic_destroy(wind->music_game);
}
