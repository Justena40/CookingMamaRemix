/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** crete tab where are menu and ingredients
*/

#include <stdlib.h>
#include <unistd.h>
#include "tools_cook.h"
#include "recipe.h"
#include "my.h"

int	pizza_menu(menu_t **pizza)
{
	char *res = NULL;

	(*pizza)->type = PIZZA;
	res = (*pizza)->menu[0] = my_strdup("dough");
	if (res == MALLOC_ERROR)
		return (ERROR);
	res = (*pizza)->menu[1] = my_strdup("cheese");
	if (res == MALLOC_ERROR)
		return (ERROR);
	res = (*pizza)->menu[2] = my_strdup("peperoni");
	if (res == MALLOC_ERROR)
		return (ERROR);
	res = (*pizza)->menu[3] = my_strdup("tomato");
	if (res == MALLOC_ERROR)
		return (ERROR);
	(*pizza)->menu[4] = NULL;
	return (SUCCESS);
}

int	lasagna_menu(menu_t **lasagna)
{
	char *res = NULL;

	(*lasagna)->type = LASAGNA;
	res = (*lasagna)->menu[0] = my_strdup("dough");
	if (res == MALLOC_ERROR)
		return (ERROR);
	res = (*lasagna)->menu[1] = my_strdup("tomato");
	if (res == MALLOC_ERROR)
		return (ERROR);
	res = (*lasagna)->menu[2] = my_strdup("steak");
	if (res == MALLOC_ERROR)
		return (ERROR);
	res = (*lasagna)->menu[3] = my_strdup("cheese");
	if (res == MALLOC_ERROR)
		return (ERROR);
	(*lasagna)->menu[4] = NULL;
	return (SUCCESS);
}

int	eng_bre_menu(menu_t **eng_bre)
{
	char *res = NULL;

	(*eng_bre)->type = ENG_BRE;
	res = (*eng_bre)->menu[0] = my_strdup("bacon");
	if (res == MALLOC_ERROR)
		return (ERROR);
	res = (*eng_bre)->menu[1] = my_strdup("cheese");
	if (res == MALLOC_ERROR)
		return (ERROR);
	res = (*eng_bre)->menu[2] = my_strdup("tomato");
	if (res == MALLOC_ERROR)
		return (ERROR);
	res = (*eng_bre)->menu[3] = my_strdup("salad");
	if (res == MALLOC_ERROR)
		return (ERROR);
	(*eng_bre)->menu[4] = NULL;
	return (SUCCESS);
}

int	burger_menu(menu_t **burger)
{
	char *res = NULL;

	(*burger)->type = BURGER;
	res = (*burger)->menu[0] = my_strdup("bread");
	if (res == MALLOC_ERROR)
		return (ERROR);
	res = (*burger)->menu[1] = my_strdup("cheese");
	if (res == MALLOC_ERROR)
		return (ERROR);
	res = (*burger)->menu[2] = my_strdup("steck");
	if (res == MALLOC_ERROR)
		return (ERROR);
	res = (*burger)->menu[3] = my_strdup("salad");
	if (res == MALLOC_ERROR)
		return (ERROR);
	res = (*burger)->menu[4] = my_strdup("tomato");
	if (res == MALLOC_ERROR)
		return (ERROR);
	return (SUCCESS);
}

int	create_tab_menu(menu_t *recipe)
{
	menu_t **pizza = malloc(sizeof(menu_t));
	menu_t **lasagna = malloc(sizeof(menu_t));
	menu_t **eng_bre = malloc(sizeof(menu_t));
	menu_t **burger = malloc(sizeof(menu_t));
	int res = 0;

	if ((res = pizza_menu(pizza)) == ERROR)
		return (ERROR);
	if ((res = lasagna_menu(lasagna)) == ERROR)
		return (ERROR);
	if ((res = eng_bre_menu(eng_bre)) == ERROR)
		return (ERROR);
	if ((res = burger_menu(burger)) == ERROR)
		return (ERROR);
	return (SUCCESS);
}
