/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-pushswap-perry.chouteau
** File description:
** init.c
*/

#include "../includes/include.h"

void describe(void)
{
    my_printf("USAGE\n");
    my_printf("\t./bsq file.txt\n");
    my_printf("\n");
    my_printf("DESCRIPTION\n");
    my_printf("");
}

int my_error(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        describe();
        return 1;
    }
    return 0;
}

int init(s_t *s, int ac, char **av)
{
    int n = 1;

    s->buffer = my_keep_str_file(av[1]);
    if (s->buffer == NULL)
        return 84;
    s->tab_sz.x = 0;
    s->tab_sz.y = 1;
    for (;s->buffer[n - 1] != '\n' && s->buffer[n - 1]; n += 1);
    while (s->buffer[s->tab_sz.x + n] != '\n' && s->buffer[s->tab_sz.x + n])
        s->tab_sz.x += 1;
    for (int i = 0; s->buffer[i]; i += 1)
        if (s->buffer[i] == '\n')
            s->tab_sz.y += 1;
    s->square_sz = -1;
    s->place.x = -1;
    s->place.y = -1;
    return 0;
}