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
	int	check_ingr = -1;
	int order = 0;
	int ingr = 0;
	int find_recipe = 0;

	find_recipe = rand() % 4;
	while (check_ingr != END_E) {
		manege_mouse_ingredient(&event->mouseButton, *window, i_game);
		if (check_bad_ing(&(tab_menu[find_recipe]), &ingr) == ERROR) {
			find_recipe = rand() % 4;
			ingr = 0;
		} else {
			ingr++;
			check_ingr = tab_menu[find_recipe][];
			}
	}
	order++;
	return (SUCCESS);
}
