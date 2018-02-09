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

void	define_button(int *arr_but, button_t *but)
{
	sfColor		color = {arr_but[4], arr_but[5],
				arr_but[6], arr_but[7]};

	sfRectangleShape_setPosition(but->rect, but->pos);
	sfRectangleShape_setSize(but->rect, but->size);
	sfRectangleShape_setFillColor(but->rect, color);
}

bool	init_button(int *arr_but, button_t **but)
{
	button_t	*tmp = *but;
	button_t	*new_button = malloc(sizeof(button_t));

	if (new_button == NULL)
		return (false);
        new_button->pos.x = arr_but[0];
        new_button->pos.y = arr_but[1];
        new_button->size.x = arr_but[2];
        new_button->size.y = arr_but[3];
        new_button->rect = sfRectangleShape_create();
        new_button->next = NULL;
	if (*but == NULL)
		*but = new_button;
	else {
		while(tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_button;
	}
	define_button(arr_but, new_button);
	return (true);
}