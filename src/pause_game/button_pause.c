/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** init the button in the pause fucntion
*/

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include "scene.h"
#include "tools_cook.h"
#include "my.h"

int	init_button_pause(button_t **button_p)
{
	int pause_but[9] = {170, 300, 100, 60, 255, 120, 50, 255, -1};
	int pause_but2[9] = {290, 300, 100, 60, 120, 255, 50, 255, -1};
	int pause_but3[9] = {410, 300, 100, 60, 10, 120, 255, 255, -1};

	*button_p = NULL;
	if (init_button(pause_but, button_p) == false ||
	    init_button(pause_but2, button_p) == false ||
	    init_button(pause_but3, button_p) == false)
		return (ERROR);
	return (SUCCESS);
}
