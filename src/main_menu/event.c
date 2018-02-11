/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** event of the menu
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my.h"

<<<<<<< HEAD
void	analyse_events(sfEvent *event, sfRenderWindow **window, int *state)
{
	if (event->type == sfEvtClosed ||
	sfKeyboard_isKeyPressed(sfKeyQ) == 1) {
		*state = -1;
=======
void	analyse_events_menu(sfEvent *event, sfRenderWindow **window,
			int *change_window)
{
	if (sfKeyboard_isKeyPressed(sfKeyQ) == sfTrue) {
//		*change_window = 0;
>>>>>>> 52b8e7d3fabdb1413c964b5cec04362ccc000c38
		sfRenderWindow_close(*window);
	}
	if (event->type == sfEvtClosed) {
		//	*change_window = 0;
		sfRenderWindow_close(*window);
	}
//	if (event->type == sfEvtMouseButtonPressed)
//		manege_mouse_menu(event->mouseButton);
}
