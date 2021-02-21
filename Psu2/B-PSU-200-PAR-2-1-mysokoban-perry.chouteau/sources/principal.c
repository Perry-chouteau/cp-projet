/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bspushswap-perry.chouteau
** File description:
** two_list.c
*/

#include "../includes/include.h"

int print(s_t *s)
{
    int y;

    for (y = 0; s->tab[y] != NULL; y += 1)
        mvprintw(y + LINES / 4, COLS / 4, "%s", s->tab[y]);
    if (LINES < s->game_size.y + y || COLS < s->game_size.x) {
        clear();
        mvprintw(0, 0, "The Terminal is too small");
    }
}

int sokoban(s_t *s)
{
    s->move = 0;
    for (s->ch = 'a'; 1 && s->ch != 'q'; s->ch = getch()) {
        clear();
        changes(s);
        print(s);
        refresh();
    }
    free_all(s);
    return 0;
}

int main(int ac, char **av)
{
    s_t *s;
    int ret;
    if (my_error(ac, av) == 1)
        return 0;
    if (my_error(ac, av) == 84)
        return 84;
    s = malloc(sizeof(s_t));
    if (init(s, ac, av) == 84)
        return 84;
    return sokoban(s);
}