/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** menu of the game
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <unistd.h>
#include "menu.h"
#include "my.h"
#include "scene.h"

//basic_scn_t -> nom de la structure

void	menu(void)
{
	sprite_menu_t i_menu;
	sfEvent event;

	all_init(&i_menu);
	if (i_menu.window == 0)
		return;
	while (sfRenderWindow_isOpen(i_menu.window)) {
		while (sfRenderWindow_pollEvent(i_menu.window, &event))
			sfRenderWindow_close(i_menu.window);
		sfRenderWindow_clear(i_menu.window, sfBlack);
		draw_pictures_menu(&i_menu);
	}
	destroy_all_menu(&i_menu);
}
