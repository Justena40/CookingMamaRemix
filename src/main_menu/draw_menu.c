/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** draw all sprite
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include "menu.h"

void	draw_all_sprite(sprite_menu_t *i_menu)
{
	sfRenderWindow_drawSprite(i_menu->window, i_menu->back, NULL);
	sfRenderWindow_display(i_menu->window);
}
