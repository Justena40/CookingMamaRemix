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

int	check_bad_ing(menu_t *recipe, int *ingr)
{
	return (SUCCESS);
}

int	timer_game(sfEvent *event, sfRenderWindow **window, scene_m_t *i_game,
		menu_t *tab_menu)
{
	ingr_e	ingr_catch = NO_CATCH_E;
	int order = 0;
	int ingr = 0;
	int recipe = 0;

	recipe = rand() % 4;
	while (tab_menu[recipe].ingr[ingr] != END_E) {
		ingr_catch = manege_mouse_ingredient(
			&event->mouseButton, *window, i_game);
		if (tab_menu[recipe].ingr[ingr] != ingr_catch &&
		tab_menu[recipe].ingr[ingr] != NO_CATCH_E) {
			order = rand() % 4;
			ingr = 0;
		}
		else if (tab_menu[recipe].ingr[ingr] == ingr_catch)
			ingr++;
	}
	order++;
	return (SUCCESS);
}
