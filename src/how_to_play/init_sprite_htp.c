/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** init struct how to play
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "how_to_play.h"
#include "my.h"

void	init_sprite(sprite_htp_t *s_htp_t)
{
	s_htp_t->bk = sfSprite_create();
	s_htp_t->bk_t = sfTexture_createFromFile("pictures/", NULL);
	sfSprite_setTexture(s_htp_t->bk, s_htp_t->bk_t, sfTrue);
}

void	init_text(sprite_htp_t *s_htp_t)
{
	//init the text;
	return;
}

void	init_htp(sprite_htp_t *s_htp_t)
{
	init_sprite(s_htp_t);
}
