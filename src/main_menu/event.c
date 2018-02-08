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

void	analyse_events(sfEvent *event, sfRenderWindow **window)
{
	if (sfKeyboard_isKeyPressed(sfKeyQ) == sfTrue ||
	    event->type == sfEvtClosed) {
		sfRenderWindow_close(*window);
	}
}
