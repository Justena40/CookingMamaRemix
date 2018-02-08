/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** button structure
*/

#ifndef BUTTON_H_
#define BUTTON_H_

#include <SFML/Graphics/RectangleShape.h>
#include <SFML/System/Vector2.h>

typedef struct button
{
	sfRectangleShape	*rect;
	sfVector2f		pos;
	sfVector2f		size;
	struct button		*next;
}button_t;

#endif /*BUTTON_H_*/
