/*
** EPITECH PROJECT, 2020
** Bootcamp
** File description:
** my_star.c
*/

#include "includes/star.h"

int my_star(int n)
{
    if (n == 1)
        return (star1());
    return (star_p(n));
    return 0;
}

int main(int ac, char **av)
{
    int nb;
    if (ac != 2)
        return 84;
    if (my_str_isnum(av[1]) == 1) {
        nb = to_number(av[1]);
        if (nb < 0)
            return 84;
        else if (nb == 0)
            return 0;
        else
            return (my_star(nb));
    }
    else {
        show_string("Usage: ./star\n");
        return 84;
    }
}