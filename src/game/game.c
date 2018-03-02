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

static void	change_score(window_t *wind, int order)
{
	int score = order;

	wind->tab_score[1] = score % 10 + 48;
	wind->tab_score[0] = score / 10 % 10 + 48;
}

void	change_second(window_t *wind, int second)
{
	int score = second;

	wind->tab_time[1] = score % 10 + 48;
	wind->tab_time[0] = score / 10 % 10 + 48;
}

static void	music_init(window_t *wind)
{
	sfMusic_stop(wind->music);
	sfMusic_play(wind->music_game);
	sfMusic_setLoop(wind->music_game, sfTrue);
}

int	game(all_scene_t *scenes, window_t *wind)
{
	static int order = 0;
	clocks_t	*clock = malloc(sizeof(clock_t));
	menu_t tab_menu[4];

	if (clock == NULL)
		return (ERROR);
	clock->clock = sfClock_create();
	create_tab_menu(tab_menu);
	music_init(wind);
	clock->second = 0;
	while (scenes->change_window == GAME &&
	clock->second < END_TIMER) {
		change_score(wind, order);
		timer_game(wind, scenes, tab_menu, clock);
		order++;
	}
	order = 0;
	scenes->change_window = MENU_RESTO;
	return (SUCCESS);
}
