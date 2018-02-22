/*
** EPITECH PROJECT, 2018
** button_init.c
** File description:
** initialization list button for different structure button_t
*/

#include <SFML/Graphics.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include "text.h"
#include "scene.h"

void	define_button(int *arr_but, button_t *but, char *name_but)
{
	sfColor		color_letter = {255, 255, 255, 255};
	sfColor		color_but = {arr_but[4], arr_but[5],
				     arr_but[6], arr_but[7]};

	sfRectangleShape_setPosition(but->rect, but->pos);
	sfRectangleShape_setSize(but->rect, but->size);
	sfRectangleShape_setFillColor(but->rect, color_but);
	sfText_setFont(but->text->text, but->text->font);
	sfText_setCharacterSize(but->text->text, 20);
	sfText_setColor(but->text->text, color_letter);
	sfText_setPosition(but->text->text, but->pos);
	sfText_setString(but->text->text, name_but);
}

bool	init_button(int *arr_but, button_t **but, char *name_but)
{
	button_t	*tmp = *but;
	button_t	*new_button = malloc(sizeof(button_t));

	if (new_button == NULL || (new_button->text = malloc(sizeof(text_t))) == NULL)
		return (false);
	init_text(&(new_button->text));
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
	define_button(arr_but, new_button, name_but);
	return (true);
}
