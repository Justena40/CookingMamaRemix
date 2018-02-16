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
int	all_init_htp(scene_t *i_htp);
void	how_to_play(scene_t *i_htp, sfRenderWindow **window, sfEvent *event,
		int *change_window);
void	analyse_event_htp(sfEvent *event, sfRenderWindow **window,
			int *change_window);
void	destroy_all_htp(scene_t **i_htp);

#endif /* HTP_H_ */