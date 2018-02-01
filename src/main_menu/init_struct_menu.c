/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** initialisation of the menu struct
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "menu.h"

void	init_pictures(sprite_menu_t *i_menu)
{
	sfVideoMode mode = {1080, 720, 32};

	i_menu->window = sfRenderWindow_create(mode, "MY_COOK",
					sfResize | sfClose, NULL);
	i_menu->menu_b = sfTexture_create(1080, 720);
	sfRenderWindow_setFramerateLimit(i_menu->window, 60);
	i_menu->menu_b = sfTexture_createFromFile("pictures/sky.png", NULL);
	i_menu->back = sfSprite_create();
	sfSprite_setTexture(i_menu->back, i_menu->menu_b, sfTrue);
}

void	all_init(sprite_menu_t *i_menu)
{
	init_pictures(i_menu);
}
