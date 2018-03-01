/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** init sprite menu cart
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "tools_cook.h"
#include "play_game.h"
#include "my.h"

static int	init_pictures_menu_cart(object_t **obj)
{
	if (create_node(obj, B_MENU, 30, 0) == false)
		return (ERROR);
	if (create_node(obj, E_MENU, 30, 0) == false)
		return (ERROR);
	if (create_node(obj, L_MENU, 30, 0) == false)
		return (ERROR);
	if (create_node(obj, P_MENU, 30, 0) == false)
		return (ERROR);
	return (SUCCESS);
}

int	init_game_obj_menu_cart(object_t **obj)
{
	if (init_pictures_menu_cart(obj) == ERROR)
		return (ERROR);
	return (SUCCESS);
}
