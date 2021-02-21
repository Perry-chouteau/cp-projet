/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bspushswap-perry.chouteau
** File description:
** two_list.c
*/

#include "../includes/include.h"

int game_status(s_t *s)
{
    s->status = END;
    for (int i = 0; s->tab[i] != NULL; i += 1)
        for (int j = 0; s->tab[i][j] != '\0'; j += 1)
            if (s->tab[i][j] == '|')
                return CONTINUE;
    return END;
}

int del__stick(s_t *s)
{
    for (int i = 0, j = s->turn.max;
    s->tab[s->turn.line][i] != '\0' && j > 0; i += 1)
        if (s->tab[s->turn.line][i] == '|') {
            s->tab[s->turn.line][i] = ' ';
            j -= 1;
        }
}

int matchstick(s_t *s)
{
    s->status = END;
    print(s->tab);
    while (1) {
        my_printf("Your turn:\n");
        matchstick_you(s);
        if (game_status(s) == END) {
            my_printf("I Won :)\n");
            return 2;
        }
        matchstick_ia(s);
        if (game_status(s) == END) {
            my_printf("I Lost :(\n");
            return 1;
        }
        print(s->tab);
    }
}

int main(int ac, char **av)
{
    s_t *s = malloc(sizeof(s_t));
    if (my_error(ac, av) == 1)
        return 0;
    if (my_error(ac, av) == 84)
        return 84;
    init(s, ac, av);
    return matchstick(s);
}