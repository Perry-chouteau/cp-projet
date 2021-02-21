/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bspushswap-perry.chouteau
** File description:
** two_list.c
*/

#include "../includes/include.h"

int socoban(s_t *s)
{
    int move = 0;

    init_window();
    for (s->ch = 'a'; 1 && s->ch != 'q'; s->ch = getch(), move += 1) {
        clear();
        mvprintw(1, 0, "__________________________________________");
        mvprintw(2, 0, "| MOVE: arrows ( )| RESTART: R | EXIT: Q |");
        mvprintw(3, 0, "|_________________|____________|_________|");
        changes(s);
        for (int y = 0; s->tab[y] != NULL; y += 1)
            mvprintw(y + 5, 15, "%s", s->tab[y]);
        refresh();
    }
    free_all(s);
    return 0;
}

int main(int ac, char **av)
{
    s_t *s;
    int ret;

    if (my_error(ac, av) == 84)
        return 84;
    if (my_error(ac, av) == 1)
        return 0;
    s = malloc(sizeof(s_t));
    if (init(s, ac, av) == 84) {
        free_all(s);
        return 84;
    }
    return socoban(s);
}