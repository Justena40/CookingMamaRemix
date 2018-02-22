/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** event og the game
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "tools_cook.h"
#include "play_game.h"

void	analyse_event_game(sfEvent *event, sfRenderWindow **window,
			   int *change_window, scene_m_t *i_game)
{
	if (event->type == sfEvtKeyPressed) {
		if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
			*change_window = PAUSE;
	}
	if (event->type == sfEvtMouseButtonPressed)
		manege_mouse_ingredient(&event->mouseButton, *window, i_game);
	if (event->type == sfEvtClosed ||
	    sfKeyboard_isKeyPressed(sfKeyQ) == 1) {
		*change_window = -1;
		sfRenderWindow_close(*window);
	}
}
