/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** destroy sprite
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "menu.h"

void	destroy_all_menu(sprite_menu_t *i_menu)
{
	sfSprite_destroy(i_menu->back);
	sfTexture_destroy(i_menu->menu_b);
	sfSprite_destroy(i_menu->rest);
	sfTexture_destroy(i_menu->rest_t);
	sfRenderWindow_destroy(i_menu->window);
}
