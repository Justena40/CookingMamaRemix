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
	sfSprite_setPosition(i_menu->rest, i_menu->pos_rest);
	sfSprite_setPosition(i_menu->ground, i_menu->pos_gr);
	sfSprite_setPosition(i_menu->panc, i_menu->pos_panc);
	sfRenderWindow_drawSprite(i_menu->window, i_menu->back, NULL);
	sfRenderWindow_drawSprite(i_menu->window, i_menu->ground, NULL);
	sfRenderWindow_drawSprite(i_menu->window, i_menu->rest, NULL);
	sfRenderWindow_drawSprite(i_menu->window, i_menu->panc, NULL);
	sfRenderWindow_display(i_menu->window);
}
