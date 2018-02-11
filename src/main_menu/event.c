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

void	analyse_events(sfEvent *event, sfRenderWindow **window, int *state)
{
	if (event->type == sfEvtClosed ||
	sfKeyboard_isKeyPressed(sfKeyQ) == 1) {
		*state = -1;
		sfRenderWindow_close(*window);
	}
}
