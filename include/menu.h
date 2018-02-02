/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** menu.h
*/

#ifndef MENU_H_
#define MENU_H_
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

typedef struct menu
{
	sfRenderWindow* window;
	sfSprite* back;
	sfTexture* menu_b;
	sfSprite* rest;
	sfTexture* rest_t;
	sfVector2f pos_rest;
	sfSprite* ground;
	sfTexture* ground_t;
	sfVector2f pos_gr;
	sfSprite* panc;
	sfTexture* panc_t;
	sfVector2f pos_panc;
	sfMusic* music;
}sprite_menu_t;

#endif /* MENU_H_ */
