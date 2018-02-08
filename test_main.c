/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <SFML/Graphics.h>
#include <SFML/Window/Window.h>
#include <SFML/Graphics/RenderWindow.h>
#include "scene.h"

int	init_pause(basic_scn_t **pause);

/*int	click_rect(sfRectangleShape *rect, sfVector2i click_pos)
{
	return (click_pos.x < sfRectangleShape_getPosition(rect).x +
		sfRectangleShape_getSize(rect).x &&
		click_pos.x > sfRectangleShape_getPosition(rect).x &&
		click_pos.y < sfRectangleShape_getPosition(rect).y +
		sfRectangleShape_getSize(rect).y &&
		click_pos.y > sfRectangleShape_getPosition(rect).y);
}*/

int	main(int argc, char **argv)
{
	sfVideoMode		mode = {800, 600, 32};
	sfRenderWindow*		window;
	sfVector2f		size_rect;
	sfEvent			event;
	basic_scn_t		*pause = NULL;
	int			count = 0;

	window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
	init_pause(&pause);
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event)) {
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(window);
		}
		sfRenderWindow_clear(window, sfBlack);
		while (pause->button->next != NULL) {
			sfRenderWindow_drawRectangleShape(window, pause->button->rect, NULL);
			pause->button = pause->button->next;
		}
		sfRenderWindow_display(window);
	}
	sfRenderWindow_destroy(window);
	return (0);
}
