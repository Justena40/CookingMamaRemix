/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** event of the function pause
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "tools_cook.h"
#include "pause.h"

void	analyse_event_pause(window_t *wind, int *change_window,
			int *pause, int *second)
{
	if (wind->event.type == sfEvtClosed ||
	sfKeyboard_isKeyPressed(sfKeyQ) == 1) {
		*change_window = -1;
		*pause = -1;
		*second = END_TIMER;
		sfRenderWindow_close(wind->window);
	}
	if (wind->event.type == sfEvtMouseButtonPressed)
		manege_mouse_pause(&(wind->window), change_window, pause,
			second);
}
