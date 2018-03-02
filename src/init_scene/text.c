/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** text functions
*/

#include <SFML/Graphics.h>
#include "tools_cook.h"
#include "scene.h"
#include "text.h"

int	init_score(window_t *wind)
{
	wind->score_font = sfFont_createFromFile(SCORE_F);
	if (!wind->score_font)
		return (ERROR);
	wind->score_order = sfText_create();
	sfText_setFont(wind->score_order, wind->score_font);
	sfText_setCharacterSize(wind->score_order, 50);
	sfText_setColor(wind->score_order, sfBlack);
	(wind->tab_score)[0] = '0';
	(wind->tab_score)[1] = '0';
	(wind->tab_score)[2] = '\0';
	wind->pos_score.x = 260;
	wind->pos_score.y = 390;
	return (SUCCESS);
}

int	init_time(window_t *wind)
{
	wind->time_font = sfFont_createFromFile(SCORE_F);
	if (!wind->time_font)
		return (ERROR);	wind->time_text = sfText_create();
	sfText_setFont(wind->time_text, wind->time_font);
	sfText_setCharacterSize(wind->time_text, 50);
	sfText_setColor(wind->time_text, sfBlack);
	(wind->tab_time)[0] = '0';
	(wind->tab_time)[1] = '0';
	(wind->tab_time)[2] = '\0';
	wind->pos_time.x = 440;
	wind->pos_time.y = 50;
	return (SUCCESS);
}

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
