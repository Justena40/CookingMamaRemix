/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** manege the button and iteraction with the mouse
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "tools_cook.h"
#include "play_game.h"

int	play(sfVector2i mouse_menu)
{
	if (mouse_menu.x >= 690 && mouse_menu.x <= 690 + 100
	&& mouse_menu.y >= 540 && mouse_menu.y <= 540 + 30) {
		return (1);
	}
	return (0);
}

int	htp(sfVector2i mouse_menu)
{
	if (mouse_menu.x >= 655 && mouse_menu.x <= 655 + 100
	&& mouse_menu.y >= 590 && mouse_menu.y <= 590 + 30) {
		return (1);
	}
	return (0);
}

int	quit(sfVector2i mouse_menu)
{
	if (mouse_menu.x >= 690 && mouse_menu.x <= 690 + 100
	&& mouse_menu.y >= 635 && mouse_menu.y <= 635 + 100) {
		return (1);
	}
	return (0);
}

void	manege_mouse_menu(sfRenderWindow *window,
		int *change_window)
{
	sfVector2i mouse_menu;

	mouse_menu = sfMouse_getPositionRenderWindow(window);
	if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
		if (play(mouse_menu) == 1)
			*change_window = GAME;
		else if (htp(mouse_menu) == 1)
			*change_window = HTP;
		else if (quit(mouse_menu) == 1) {
			*change_window = -1;
			sfRenderWindow_close(window);
		}
	}
}
