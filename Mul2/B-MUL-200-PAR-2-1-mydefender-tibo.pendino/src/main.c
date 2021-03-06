/*
** EPITECH PROJECT, 2021
** project
** File description:
** project
*/

#include "my_defender.h"

int main(int ac, char **av, char **env)
{
    if (display_help(ac, av))
        return 0;
    if (error_handling(ac, av, env))
        return 84;
    defender(ac, av);
    return 0;
}
