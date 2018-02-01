/*
** EPITECH PROJECT, 2018
** init_basic_scene.c
** File description:
** initialization for basic scene
*/

#include "scene.h"

void	init_arr_pause_button(init_button_t arr_pause_button[])
{
	arr_pause_button[0] = (init_button_t) {{10, 10}, {5, 7}};
	arr_pause_button[1] = (init_button_t) {{20, 20}, {5, 7}};
	arr_pause_button[2] = (init_button_t) {{30, 30}, {5, 7}};
}

char	*init_pause(basic_scn_t *pause)
{
	init_button_t	arr_pause_button[3];

	
	init_arr_pause_button(arr_pause_button);
}
