/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** event of the menu
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "menu.h"
#include "my.h"

void	analyse_events(sfEvent event, sprite_menu_t *i_menu)
{
	if (event.type == sfEvtKeyPressed) {
		if (sfKeyboard_isKeyPressed(sfKeyQ) == sfTrue)
			sfRenderWindow_close(i_menu->window);
	}
	if (event.type == sfEvtClosed)
		sfRenderWindow_close(i_menu->window);
}
