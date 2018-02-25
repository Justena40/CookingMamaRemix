/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** header of pause
*/

#ifndef PAUSE_H_
#define PAUSE_H_
#include "scene.h"

int	init_pictures_pause(scene_t *i_pause);
int	all_init_pause(scene_t *i_pause);
void	destroy_all_pause(scene_t **i_pause);
void	draw_sprite_pause(scene_t *i_pause, sfRenderWindow *window);
void	analyse_event_pause(sfEvent *event, sfRenderWindow **window,
			int *change_window);
void	pause_game(scene_t *i_pause, sfRenderWindow **window, sfEvent *event,
		int *change_window);
int	init_button_pause(button_t **button_p);
void	manege_mouse_pause(sfMouseButtonEvent *event,
			sfRenderWindow **window, int *change_window);
#endif /* PAUSE_H_ */
