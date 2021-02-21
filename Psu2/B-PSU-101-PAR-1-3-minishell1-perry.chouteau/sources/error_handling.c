/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-minishell1-perry.chouteau
** File description:
** error_handling.c
*/

#include "../includes/include.h"

void describe(void)
{
    my_printf("USAGE\n");
    my_printf("\t./mysh\n");
    my_printf("\n");
    my_printf("DESCRIPTION\n");
    my_printf("you can read the Readme.md\n");
    exit(0);
}

int my_error(int ac, char **av, char **env)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        describe();
    if (ac != 1 || env[0] == NULL)
        exit(84);
    if (env[0] == NULL)
        exit(84);
    return 0;
}