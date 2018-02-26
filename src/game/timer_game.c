/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** timer while
*/

#include <SFML/System/Clock.h>
#include <stdlib.h>
#include <unistd.h>
#include "tools_cook.h"
#include "play_game.h"
#include "recipe.h"

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

int	timer_game(window_t *wind, all_scene_t *scenes,	menu_t *tab_menu,
	int *second)
{
	sfClock *clock = sfClock_create();
	sfTime time;
	ingr_e	ingr_catch = NO_CATCH_E;
	int order = 0;
	int ingr = 0;
	int recipe = 0;

	recipe = rand() % 4;
	while (tab_menu[recipe].ingr[ingr] != END_E && *second < END_TIMER) {
		time_elapse(second, time, clock, &(scenes->change_window));
		analyse_event_game(&(wind->event), &(wind->window),
				&(scenes->change_window), second);
		ingr_catch = manege_mouse_ingredient(wind->window,
			scenes->i_game);
		if (tab_menu[recipe].ingr[ingr] != ingr_catch &&
		tab_menu[recipe].ingr[ingr] == NO_CATCH_E) {
			order = rand() % 4;
			ingr = 0;
		}
		else if (tab_menu[recipe].ingr[ingr] == ingr_catch)
			ingr++;
		sfRenderWindow_clear(wind->window, sfBlack);
		draw_sprite_game(scenes->i_game, wind->window);
		sfRenderWindow_display(wind->window);
	}
	order++;
	return (SUCCESS);
}
