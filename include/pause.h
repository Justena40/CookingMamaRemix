/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** header of pause
*/

#ifndef PAUSE_H_
#define PAUSE_H_
#include "scene.h"

int	init_pictures_pause(object_t **obj);
int	all_init_pause(object_t **obj);
void	destroy_all_pause(scene_t **i_pause);
void	draw_sprite_pause(scene_t *i_pause, sfRenderWindow *window);
void	analyse_event_pause(window_t *wind, int *change_window,
			int *pause);
void	pause_game(all_scene_t *scenes, window_t *wind, int *pause);
int	init_button_pause(button_t **button_p);
void	manege_mouse_pause(sfRenderWindow **window, int *change_window,
			int *pause);

#endif /* PAUSE_H_ */
