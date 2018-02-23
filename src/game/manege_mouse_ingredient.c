/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** manege mouse ingredient
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include "scene.h"
#include "tools_cook.h"
#include "play_game.h"

object_t	*position_mouse_ingredient(sfVector2i *mouse_ingr,
					   scene_m_t *i_game)
{
	object_t *tmp = i_game->ingr;
	sfIntRect rect;

	while (tmp) {
		rect = sfSprite_getTextureRect(tmp->sprite);
		rect.top = tmp->pos.y;
		rect.left = tmp->pos.x;
		if (sfIntRect_contains(&rect, mouse_ingr->x,
				mouse_ingr->y) == sfTrue)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

void	manege_mouse_ingredient(sfMouseButtonEvent *event,
				sfRenderWindow *window, scene_m_t *i_game)
{
	sfVector2i mouse_ingr = sfMouse_getPositionRenderWindow(window);
	sfVector2f pos_mouse = {mouse_ingr.x, mouse_ingr.y};
	static object_t *catch_ingredient = NULL;

	if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue &&
	    catch_ingredient == NULL)
		catch_ingredient = position_mouse_ingredient(&mouse_ingr, i_game);
	if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue &&
	    catch_ingredient != NULL) {
		catch_ingredient->pos.x = mouse_ingr.x;
		catch_ingredient->pos.y = mouse_ingr.y;
		sfSprite_setPosition(catch_ingredient->sprite, pos_mouse);
	}
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfFalse)
		catch_ingredient = NULL;
}
