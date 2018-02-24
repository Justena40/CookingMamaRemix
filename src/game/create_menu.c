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
	arr_menu[0] = (menu_t) {PIZZA, {"dough", "cheese", "peperoni", "tomato",
					NULL}};
	arr_menu[1] = (menu_t) {LASAGNA, {"dough", "tomato", "steak", "cheese",
					NULL}};
	arr_menu[2] = (menu_t) {ENG_BRE, {"bacon", "cheese", "tomato", "salad",
					NULL}};
	arr_menu[3] = (menu_t) {BURGER, {"bread", "cheese", "steak", "salad",
					"tomato"}};
}
