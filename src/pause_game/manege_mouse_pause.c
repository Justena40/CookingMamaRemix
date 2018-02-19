/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** manege the position of the mouse with the button
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "tools_cook.h"
#include "pause.h"

void	manege_mouse_pause(sfMouseButtonEvent *event, sfRenderWindow **window,
			   int *change_window)
{
	sfVector2i mouse_pause;

	mouse_pause = sfMouse_getPositionRenderWindow(*window);
	if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
		if (mouse_pause.x >= 170 && mouse_pause.x <= 170 + 100
		&& mouse_pause.y >= 300 && mouse_pause.y <= 300 + 60) {
			*change_window = MENU_RESTO;
		}
		else if (mouse_pause.x >= 290 && mouse_pause.x <= 290 + 100
			&& mouse_pause.y >= 300 && mouse_pause.y <= 300 + 60) {
			*change_window = GAME;
		}
		else if (mouse_pause.x >= 410 && mouse_pause.x <= 410 + 100
			 && mouse_pause.y >= 300 && mouse_pause.y <= 300 + 60) {
			*change_window = -1;
			sfRenderWindow_close(*window);
		}
	}
}
