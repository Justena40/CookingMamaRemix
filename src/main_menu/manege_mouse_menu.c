/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** manege the button and iteraction with the mouse
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

void	manege_mouse_menu(sfMouseButtonEvent event, sfRenderWindow *window)
{
	sfVector2i mouse_menu;

	mouse_menu = sfMouse_getPositionRenderWindow(window);
	if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
		//coordonne de chaque bouton
	}
}
