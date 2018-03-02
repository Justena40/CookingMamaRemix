/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** manege the button and iteraction with the mouse
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "tools_cook.h"
#include "menu.h"

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
