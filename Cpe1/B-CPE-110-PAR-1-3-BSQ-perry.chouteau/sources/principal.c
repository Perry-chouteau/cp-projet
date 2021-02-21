/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bspushswap-perry.chouteau
** File description:
** two_list.c
*/

#include "../includes/include.h"

int tab_error(s_t *s)
{
    for (int i = 0; s->tab[0][i]; i += 1)
        if ((s->tab[0][i] < '0' || s->tab[0][i] > '9'))
            return 84;
    if (my_getnbr(s->tab[0]) != s->tab_sz.y - 2)
        return 84;
    for (int i = 1; s->tab[i + 1]; i += 1)
        for (int j = 0; s->tab[i][j]; j += 1)
            if (s->tab[i][j] != '.' && s->tab[i][j] != 'o')
                return 84;
    return 0;
}

void print_bsq(s_t *s)
{
    for (int i = 1; s->tab[i + 1] != NULL; i += 1)
        my_printf("%s\n", s->tab[i]);
}

int bsq(int ac, char **av)
{
    s_t *s = malloc(sizeof(s_t));

    if (init(s, ac, av) == 84)
        return 84;
    if (84 == str_to_tab(s))
        return 84;
    if (84 == tab_error(s))
        return 84;
    loop_map(s);
    print_bsq(s);
    return 0;
}

int main(int ac, char **av)
{
    if (my_error(ac, av) == 1)
        return 0;
    else if (my_error(ac, av) == 84)
        return 84;
    return bsq(ac, av);
}