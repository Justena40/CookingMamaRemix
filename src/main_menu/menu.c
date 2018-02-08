/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** menu of the game
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <unistd.h>
#include "menu.h"
#include "game.h"
#include "my.h"

void	menu(void)
{
	scene_t *i_menu = malloc(sizeof(scene_t));
	button_t *tmp = NULL;
	sfVideoMode mode = {1080, 720, 32};
	int res = 0;
	sfRenderWindow *window;
	sfEvent event;

	window = sfRenderWindow_create(mode, "MY_COOK",
					sfResize | sfClose, NULL);
	sfRenderWindow_setFramerateLimit(window, 60);
	res = all_init(i_menu);
	if (window == 0 || res == 84)
		return;
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event)) {
			analyse_events(&event, &window);
		}
		printf("dqzjidoz\n");
		sfRenderWindow_clear(window, sfBlack);
		/*	tmp = i_menu->button;
		while (tmp != NULL) {
			sfRenderWindow_drawRectangleShape(window, tmp->rect, NULL);
			tmp = tmp->next;
			}*/
		draw_all_sprite(i_menu, window);
		sfRenderWindow_display(window);
	}
	destroy_all_menu(&i_menu);
}
