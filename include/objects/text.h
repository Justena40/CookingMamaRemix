/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** text structure
*/

#ifndef TEXT_H_
#define TEXT_H_

#include <SFML/Graphics/Font.h>
#include <SFML/Graphics/Color.h>
#include <SFML/System/Vector2.h>

typedef struct text
{
	sfFont		*font;
	sfVector2f	pos;
	sfColor		color;
	struct text	*next;
}text_t;

#endif /*TEXT_H_*/
