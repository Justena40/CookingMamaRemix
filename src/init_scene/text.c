/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** text functions
*/

#include <SFML/Graphics.h>
#include "tools_cook.h"
#include "text.h"

int	init_text(text_t **text)
{
	(*text)->font = sfFont_createFromFile(FONT);
	(*text)->text = sfText_create();
	if ((*text)->font == NULL)
		return (ERROR);
	(*text)->pos.x = 655;
	(*text)->pos.y = 635;
	return (SUCCESS);
}
