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

void	manege_mouse_menu(sfMouseButtonEvent *event, sfRenderWindow *window,
		int *change_window)
{
	sfVector2i mouse_menu;

	mouse_menu = sfMouse_getPositionRenderWindow(window);
	if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
		if (mouse_menu.x >= 690 && mouse_menu.x <= 690 + 100
		&& mouse_menu.y >= 540 && mouse_menu.y <= 540 + 30) {
			*change_window = GAME;
		}
		else if (mouse_menu.x >= 655 && mouse_menu.x <= 655 + 100
			&& mouse_menu.y >= 590 && mouse_menu.y <= 590 + 30) {
			*change_window = HTP;
		}
		else if (mouse_menu.x >= 690 && mouse_menu.x <= 690 + 100
			&& mouse_menu.y >= 635 && mouse_menu.y <= 635 + 100) {
			*change_window = -1;
			sfRenderWindow_close(window);
		}
	}
}
