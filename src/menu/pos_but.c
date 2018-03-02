/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** function who check the position of button with mouse
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "tools_cook.h"

int	play(sfVector2i mouse_menu)
{
	if (mouse_menu.x >= 655 && mouse_menu.x <= 690 + 100
	&& mouse_menu.y >= 540 && mouse_menu.y <= 540 + 30) {
		return (1);
	}
	return (0);
}

int	htp(sfVector2i mouse_menu)
{
	if (mouse_menu.x >= 655 && mouse_menu.x <= 655 + 160
	&& mouse_menu.y >= 590 && mouse_menu.y <= 590 + 30) {
		return (1);
	}
	return (0);
}

int	quit(sfVector2i mouse_menu)
{
	if (mouse_menu.x >= 655 && mouse_menu.x <= 690 + 100
	&& mouse_menu.y >= 635 && mouse_menu.y <= 635 + 100) {
		return (1);
	}
	return (0);
}
