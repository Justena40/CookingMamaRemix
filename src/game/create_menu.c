/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** crete tab where are menu and ingredients
*/

#include <unistd.h>
#include "recipe.h"
#include "my.h"

void	create_tab_menu(menu_t arr_menu[4])
{
	arr_menu[0] = (menu_t) {PIZZA, {DOUGH_E, CHEESE_E, PEPERONI_E, TOMATO_E,
		END_E}};
	arr_menu[1] = (menu_t) {LASAGNA, {DOUGH_E, TOMATO_E, STEAK_E, CHEESE_E,
					END_E}};
	arr_menu[2] = (menu_t) {ENG_BRE, {BACON_E, CHEESE_E, TOMATO_E, SALAD_E,
					END_E}};
	arr_menu[3] = (menu_t) {BURGER, {BREAD_E, CHEESE_E, STEAK_E, SALAD_E,
					TOMATO_E, END_E}};
}
