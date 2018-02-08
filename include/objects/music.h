/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** music structure
*/

#ifndef MUSIC_H_
#define MUSIC_H_

#include <SFML/Audio/Music.h>

typedef struct music
{
	sfMusic		*piece;
	struct music	*next;
}music_t;

#endif /*MUSIC_H_*/
