/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-antman-perry.chouteau
** File description:
** antman.c
*/

#include "../../includes/antman.h"

int main(int ac, char **av)
{
    zip_t zip;

    if (my_strcmp(av[1], "-h") == 0 && ac == 2) {
        describe();
        return 0;
    }
    if (my_error(ac, av) == 84)
        return 84;
    zip = init(zip, ac, av);
    zip = ant(zip);
    if (zip.exit == 84)
        return 84;
    return 0;
}