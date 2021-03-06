/*
** EPITECH PROJECT, 2020
** B-MUL-200-PAR-2-1-mydefender-tibo.pendino
** File description:
** error_handling.c
*/

int display_help(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        return 1;
    }
    return 0;
}

int error_handling(int ac, char **av, char **env)
{
    if (!env[0])
        return 84;
    if (ac > 3)
        return 84;
    return 0;
}
