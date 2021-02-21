/*
** EPITECH PROJECT, 2020
** Socoban preshot
** File description:
** changes.c
*/

#include "../includes/include.h"


int check_place(s_t *s)
{
    for (int n = 0; n < s->nb_place; n += 1)
        if (s->tab[s->x_pos[n].y][s->x_pos[n].x] == ' ')
            s->tab[s->x_pos[n].y][s->x_pos[n].x] = 'O';
}

int check_win(s_t *s)
{
    for (int n = 0; n < s->nb_place; n += 1)
        if (s->tab[s->x_pos[n].y][s->x_pos[n].x] != 'X')
            return 50;
    return Win;
}

int check_restart(s_t *s)
{
    if (s->ch == ' ')
        return Restart;
}

int changes(s_t *s)
{
    key_movement(s);
    check_place(s);
    if (check_win(s) == Win)
        win(s);
    if (check_restart(s) == Restart)
        restart(s);
    return 0;
}