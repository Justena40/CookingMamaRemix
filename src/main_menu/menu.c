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
#include "game.h"
#include "my.h"

void	menu(void)
{
	scene_t *i_menu = malloc(sizeof(scene_t));
	scene_t *i_pause = malloc(sizeof(scene_t));
	scene_t *i_htp = malloc(sizeof(scene_t));
	button_t *tmp = NULL;
	sfVideoMode mode = {1080, 720, 32};
	int res = 0;
	sfRenderWindow *window;
	sfEvent event;
<<<<<<< HEAD
	int state = MENU_RESTO;
=======
//	int change_window = MENU_RESTO;
	int change_window = PAUSE;
>>>>>>> 52b8e7d3fabdb1413c964b5cec04362ccc000c38

	window = sfRenderWindow_create(mode, "MY_COOK",
				       sfResize | sfClose, NULL);
	sfRenderWindow_setFramerateLimit(window, 60);
	res = all_init_menu(i_menu);
	if (window == 0 || res == 84)
		return;
	while (sfRenderWindow_isOpen(window)) {
<<<<<<< HEAD
		while (state == MENU_RESTO) {
			while (sfRenderWindow_pollEvent(window, &event)) {
				analyse_events(&event, &window, &state);
			}
=======
		pause_game(i_pause, &window, &event, &change_window);
/*		while (change_window == MENU_RESTO) {
			while (sfRenderWindow_pollEvent(window, &event))
				analyse_events_menu(&event, &window, &change_window);
>>>>>>> 52b8e7d3fabdb1413c964b5cec04362ccc000c38
			sfRenderWindow_clear(window, sfBlack);
			/*	tmp = i_menu->button;
				while (tmp != NULL) {
				sfRenderWindow_drawRectangleShape(window, tmp->rect, NULL);
<<<<<<< HEAD
				tmp = tmp->next;
				}*/
			draw_all_sprite(i_menu, window);
			sfRenderWindow_display(window);
		}
	}
	destroy_all_menu(&i_menu);
=======
			tmp = tmp->next;
			}*/
/*			draw_all_sprite(i_menu, window);
			sfRenderWindow_display(window);
			//boucle inf qd on ferme la fenetre
		}
		destroy_all_menu(&i_menu);
*/	}
	sfRenderWindow_destroy(window);
>>>>>>> 52b8e7d3fabdb1413c964b5cec04362ccc000c38
}
