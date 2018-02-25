/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** main menu
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include "tools_cook.h"
#include "menu.h"
#include "my.h"

static bool	check_env(char **argenv)
{
	int index = 0;

	while (argenv[index] != NULL) {
		if (my_strcmp(argenv[index], "DISPLAY=:0.0") == 0)
			return (true);
		index++;
	}
	return (false);
}

static void	display_usage(void)
{
	my_putstr(1, "It's time to cook !\n\n");
	my_putstr(1, "USAGE\n");
	my_putstr(1, "    ./my_cook\n\n\n");
	my_putstr(1, "OPTION\n");
	my_putstr(1, "-h  -> print the usage and quit.\n\n\n");
	my_putstr(1, "USER INTERACTIONS\n");
	my_putstr(1, "ESCAPE -> pause the game.\n");
}

int	main(int argc, char **argv, char **argenv)
{
	if (argc == 2 && my_strcmp(argv[1], "-h") == 0)
		display_usage();
	else if (argc == 1) {
		if (check_env(argenv)) {
			if (menu())
				return (ERROR);
		}
		else
			return (ERROR);
	} else {
		my_putstr(2, "my_cook: bad argument\n");
		my_putstr(2, "my_cook: Use -h for more information.\n");
		return (ERROR);
	}
	return (SUCCESS);
}
