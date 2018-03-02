/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** manege the position of the mouse with the button
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "tools_cook.h"
#include "htp.h"

void	manege_mouse_htp(sfRenderWindow **window,
			int *change_window)
{
	sfVector2i mouse_htp;

	mouse_htp = sfMouse_getPositionRenderWindow(*window);
	if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
		if (mouse_htp.x >= 0 && mouse_htp.x <= 50
		&& mouse_htp.y >= 0 && mouse_htp.y <= 40) {
			*change_window = MENU_RESTO;
		}
	}
}
