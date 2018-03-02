/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** draw sprite and buttun of the game
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include "scene.h"
#include "play_game.h"

static void	draw_background(object_t *obj, sfRenderWindow *window)
{
	object_t *tmp = obj;

	while (tmp != NULL) {
		sfRenderWindow_drawSprite(window, tmp->sprite, NULL);
		tmp = tmp->next;
	}
}

static void	draw_ingr(object_t *ingr, sfRenderWindow *window)
{
	object_t *tmp2 = ingr;

	while (tmp2 != NULL) {
		if (tmp2->pos.x >= 650 && tmp2->pos.x <= 650 + 450 &&
		tmp2->pos.y >= 450 && tmp2->pos.y <= 450 + 157) {
			tmp2->pos.y = tmp2->save_pos.y;
			tmp2->pos.x = tmp2->save_pos.x;
			sfSprite_setPosition(tmp2->sprite, tmp2->pos);
		}
		sfRenderWindow_drawSprite(window, tmp2->sprite, NULL);
		tmp2 = tmp2->next;
	}
}

static void	draw_menu(object_t *obj, int count, sfRenderWindow *window)
{
	int	count2 = 0;
	object_t *tmp = obj;

	while (count2 < count) {
		tmp = tmp->next;
		count2++;
	}
	sfRenderWindow_drawSprite(window, tmp->sprite, NULL);
}

void	draw_sprite_game(scene_m_t *i_game, window_t *wind, int count)
{
	sfRenderWindow_clear(wind->window, sfBlack);
	draw_background(i_game->obj, wind->window);
	draw_ingr(i_game->ingr, wind->window);
	draw_menu(i_game->menu_cart, count, wind->window);
	sfText_setPosition(wind->score_order, wind->pos_score);
	sfText_setPosition(wind->time_text, wind->pos_time);
	sfRenderWindow_drawText(wind->window, wind->score_order, NULL);
	sfRenderWindow_drawText(wind->window, wind->time_text, NULL);
	sfRenderWindow_display(wind->window);
}
