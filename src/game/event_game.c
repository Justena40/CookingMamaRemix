/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** event og the game
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "tools_cook.h"
#include "pause.h"
#include "play_game.h"

static void	close_event(sfEvent *event, sfRenderWindow **window,
			int *change_window, int *second)
{
	if (event->type == sfEvtClosed ||
	sfKeyboard_isKeyPressed(sfKeyQ) == 1) {
		*change_window = -1;
		*second = END_TIMER;
		sfRenderWindow_close(*window);
	}
}

static void	pause_event(window_t *wind, all_scene_t *scene)
{
	int	pause = 0;

	if (wind->event.type == sfEvtKeyPressed) {
		if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
			pause = PAUSE;
			pause_game(scene, wind, &pause);
		}
	}
}

void	analyse_event_game(window_t *wind, all_scene_t *scene, int *second)
{
	while (sfRenderWindow_pollEvent(wind->window, &(wind->event))) {
		pause_event(wind, scene);
		close_event(&(wind->event), &(wind->window),
			&(scene->change_window), second);
		if (!sfRenderWindow_isOpen(wind->window))
			*second = END_TIMER;
	}
}
