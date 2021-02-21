/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-navy-perry.chouteau
** File description:
** map.c
*/

#include "../includes/navy.h"

int map(char *pos)
{
    char *buffer;
    struct stat s;

    buffer = malloc(sizeof(char) * (31 + 1));
    int fd = open(pos, O_RDONLY, S_IRUSR);
    if (fd == -1 || read(fd, buffer, 31) != 31)
        return 84;
    return 0;
}

int my_map(char **av, int who)
{
    switch (who) {
        case 1:
            return (map(av[1]));
        case 2:
            return (map(av[2]));
    }
}