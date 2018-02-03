/*
** EPITECH PROJECT, 2018
** button_init.c
** File description:
** initialization list button for different structure button_t
*/

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include "scene.h"
#include "init_scene.h"

void	define_button(int *arr_pause_but, button_t *pause)
{
	sfColor		color = {arr_pause_but[4], arr_pause_but[5],
				arr_pause_but[6], arr_pause_but[7]};

	sfRectangleShape_setPosition(pause->rect, pause->pos);
	sfRectangleShape_setSize(pause->rect, pause->size);
	sfRectangleShape_setFillColor(pause->rect, color);
}

bool	init_button(int *arr_pause_but, button_t **pause)
{
	button_t	*tmp = *pause;
	button_t	*new_button = malloc(sizeof(button_t));

	if (new_button == NULL)
		return (false);
        new_button->pos.x = arr_pause_but[0];
        new_button->pos.y = arr_pause_but[1];
        new_button->size.x = arr_pause_but[2];
        new_button->size.y = arr_pause_but[3];
        new_button->rect = sfRectangleShape_create();
        new_button->next = NULL;
	if (*pause == NULL)
		*pause = new_button;
	else {
		while(tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_button;
	}
	define_button(arr_pause_but, new_button);
	return (true);
}
