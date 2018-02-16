/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** buuton of the menu
*/

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include "scene.h"
#include "tools_cook.h"
#include "my.h"

int	init_button_menu(button_t *button)
{
	int menu_but[9] = {610, 500, 100, 30, 255, 120, 50, 255, -1}; //couleur fausse
	int menu_but2[9] = {610, 530, 100, 30, 120, 255, 50, 255, -1}; //couleur fausse
	int menu_but3[9] = {610, 560, 100, 30, 10, 120, 255, 255, -1}; //couleur fausse

//	button = NULL;
	if (init_button(menu_but, &button) == false ||
	    init_button(menu_but2, &button) == false ||
	    init_button(menu_but3, &button) == false)
		return (ERROR);
	return (SUCCESS);
}
