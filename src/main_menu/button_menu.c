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

int	init_button_menu(button_t **button)
{
	int menu_but[9] = {655, 635, 100, 30, 255, 120, 50, 10, -1}; //couleur fausse
	int menu_but2[9] = {655, 600, 100, 30, 120, 255, 50, 10, -1}; //couleur fausse
	int menu_but3[9] = {655, 565, 100, 30, 10, 120, 255, 10, -1}; //couleur fausse

	*button = NULL;
	if (init_button(menu_but, button/*, "PLAY"*/) == false ||
	    init_button(menu_but2, button/*, "HOW TO PLAY"*/) == false ||
	    init_button(menu_but3, button/*, "QUIT"*/) == false)
		return (ERROR);
	return (SUCCESS);
}

//bouton 1 -> quit
//bouton 2 -> HTP
//bouton 3 -> play
