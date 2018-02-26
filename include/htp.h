/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** header of htp
*/

#ifndef HTP_H_
#define HTP_H_
#include "scene.h"

void	draw_sprite_htp(scene_t *i_htp, sfRenderWindow *window);
int	all_init_htp(object_t **obj);
void	how_to_play(all_scene_t *scenes, window_t *wind);
void	analyse_event_htp(sfEvent *event, sfRenderWindow **window,
			int *change_window);
void	destroy_all_htp(scene_t **i_htp);
void	manege_mouse_htp(sfRenderWindow **window, int *change_window);

#endif /* HTP_H_ */
