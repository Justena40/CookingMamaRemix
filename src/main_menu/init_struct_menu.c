/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** initialisation of the menu struct
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "menu.h"
#include "my.h"

void	init_pictures(sprite_menu_t *i_menu)
{
	sfVideoMode mode = {1080, 720, 32};

	i_menu->window = sfRenderWindow_create(mode, "MY_COOK",
					sfResize | sfClose, NULL);
	i_menu->menu_b = sfTexture_create(1080, 720);
	sfRenderWindow_setFramerateLimit(i_menu->window, 60);
	i_menu->menu_b = sfTexture_createFromFile("pictures/sky.png", NULL);
	i_menu->back = sfSprite_create();
	sfSprite_setTexture(i_menu->back, i_menu->menu_b, sfTrue);
	i_menu->rest = sfSprite_create();
	i_menu->rest_t = sfTexture_createFromFile("pictures/resto_main_menu.png",
					NULL);
	sfSprite_setTexture(i_menu->rest, i_menu->rest_t, sfTrue);
	i_menu->ground = sfSprite_create();
	i_menu->ground_t = sfTexture_createFromFile("pictures/groung.png", NULL);
	sfSprite_setTexture(i_menu->ground, i_menu->ground_t, sfTrue);
	i_menu->panc = sfSprite_create();
	i_menu->panc_t = sfTexture_createFromFile("pictures/pancarte_menu.png", NULL);
	sfSprite_setTexture(i_menu->panc, i_menu->panc_t, sfTrue);
}

void	init_pos(sprite_menu_t *i_menu)
{
	i_menu->pos_rest.x = -30;
	i_menu->pos_rest.y = 100;
	i_menu->pos_gr.x = 0;
	i_menu->pos_gr.y = 600;
	i_menu->pos_panc.x = 600;
	i_menu->pos_panc.y = 420;
}

void	all_init(sprite_menu_t *i_menu)
{
	init_pictures(i_menu);
	init_pos(i_menu);
}
