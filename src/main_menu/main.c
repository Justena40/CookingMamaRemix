/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** main menu
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int	check_env(char **env)
{
	int index = 0;

	while (env[index] != NULL) {
		if (my_strcmp(env[index], "DISPLAY=:0.0"))
			return (0);
		index++;
	}
	return (1);
}

//1 => ERROR

int	main(int ac, char **av, char **ae)
{
	if (ac == 2 && !my_strcmp(av[1], "-h"))
		display_usage();
	else if (ac != 1) {
		write(1, "You are stupid, bad argument !\n", 32);
		return (84);
	} else {
		if (check_env(ae))
			return (84);
		else
			menu();
	}
	return (0);
}
