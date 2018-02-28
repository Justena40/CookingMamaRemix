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
#include "tools_cook.h"
#include "play_game.h"

void	time_elapse(int *second, sfTime time, sfClock *clock,
	int *change_window)
{
	if (*second >= END_TIMER) {
		*second = 0;
		*change_window = MENU_RESTO;
	}
	printf("salut\n");
	time = sfClock_getElapsedTime(clock);
	*second = time.microseconds / 1000000;
}

void	game(all_scene_t *scenes, window_t *wind)
{
	sfClock *clock = sfClock_create();
	sfTime time;
	menu_t tab_menu[4];
	int second = 0;

	create_tab_menu(tab_menu);
	sfMusic_stop(wind->music);
	sfMusic_play(wind->music_game);
	sfMusic_setLoop(wind->music_game, sfTrue);
	second = 0;
	while (scenes->change_window == GAME && second < END_TIMER) {
		timer_game(wind, scenes, tab_menu, &second);
	}
	scenes->change_window = MENU_RESTO;
	sfClock_destroy(clock);
}
