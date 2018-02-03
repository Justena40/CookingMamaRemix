/*
** EPITECH PROJECT, 2018
** init_basic_scene.c
** File description:
** initialization for basic scene
*/

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include "scene.h"
#include "init_scene.h"

int	init_pause(basic_scn_t **pause)
{
	int	pause_but[9] = {10, 20, 100, 50, 120, 120, 50, 255, -1};
	int	pause_but2[9] = {10, 220, 100, 50, 120, 10, 50, 255, -1};
	int	pause_but3[9] = {10, 420, 100, 50, 10, 120, 50, 255, -1};
	int	count = 0;

	if (pause_but == NULL)
		return (ERROR);
	(*pause)->button = NULL;
	(*pause)->obj = NULL;
	if (init_button(pause_but, &(*pause)->button) == false ||
	    init_button(pause_but2, &(*pause)->button) == false ||
	    init_button(pause_but3, &(*pause)->button) == false)
			return (ERROR);
	return (SUCCESS);
}
