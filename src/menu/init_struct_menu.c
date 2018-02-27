/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** initialisation of the menu struct
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "my.h"
#include "tools_cook.h"

#include "menu.h"

int	init_pictures_menu(object_t **obj)
{
	if (create_node(obj, SKY, 0, 0) == false)
		return (84);
	if (create_node(obj, WELCOME, 480, 30) == false)
		return (84);
	if (create_node(obj, GROUND, 0, 600) == false)
		return (84);
	if (create_node(obj, RESTO_MENU, -30, 100) == false)
		return (84);
	if (create_node(obj, SIGNPOST, 600, 370) == false)
		return (84);
	return (0);
}

int	all_init_menu(object_t **obj)
{
	*obj = NULL;
	if (init_pictures_menu(obj) == 84)
		return (84);
	return (0);
}
