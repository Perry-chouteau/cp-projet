/*
** EPITECH PROJECT, 2020
** Socoban preshot
** File description:
** game_status.c
*/

#include "../includes/include.h"

int lose(s_t *s)
{
    free_all(s);
    exit(1);
}

int win(s_t *s)
{
    free_all(s);
    exit(0);
}

int check2_x(s_t *s, int i, int j)
{
    if ((s->tab[i + 1][j] == '#' && s->tab[i][j + 1] == '#') ||
        (s->tab[i + 1][j] == '#' && s->tab[i][j - 1] == '#') ||
        (s->tab[i - 1][j] == '#' && s->tab[i][j + 1] == '#') ||
        (s->tab[i - 1][j] == '#' && s->tab[i][j - 1] == '#'))
        return -1;
    else if ((( s->tab[i + 1][j] == 'X' ||  s->tab[i + 1][j] == '#') &&
        (s->tab[i][j + 1] == 'X' ||  s->tab[i][j + 1] == '#') &&
        ( s->tab[i + 1][j + 1] == 'X' ||  s->tab[i + 1][j + 1] == '#')) ||
        (( s->tab[i + 1][j] == 'X' ||  s->tab[i + 1][j] == '#') &&
        (s->tab[i][j - 1] == 'X' ||  s->tab[i][j - 1] == '#') &&
        ( s->tab[i + 1][j - 1] == 'X' ||  s->tab[i + 1][j - 1] == '#')) ||
        (( s->tab[i - 1][j] == 'X' ||  s->tab[i - 1][j] == '#') &&
        (s->tab[i][j + 1] == 'X' ||  s->tab[i][j + 1] == '#') &&
        ( s->tab[i - 1][j + 1] == 'X' ||  s->tab[i - 1][j + 1] == '#')) ||
        (( s->tab[i - 1][j] == 'X' ||  s->tab[i - 1][j] == '#') &&
        (s->tab[i][j - 1] == 'X' ||  s->tab[i][j - 1] == '#') &&
        ( s->tab[i - 1][j - 1] == 'X' ||  s->tab[i - 1][j - 1] == '#')))
        return -1;
    else
        return Continue;
}