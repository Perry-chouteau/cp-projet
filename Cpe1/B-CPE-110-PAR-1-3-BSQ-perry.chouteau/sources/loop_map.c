/*
** EPITECH PROJECT, 2020
** BTTF_BSQ
** File description:
** find_square.c
*/

#include "../includes/include.h"

void print_line(s_t *s)
{
    for (int i = 0; i <= s->square_sz; i += 1)
        for (int j = 0; j <= s->square_sz; j += 1)
            s->tab[s->place.y + i][s->place.x + j] = 'x';
    return ;
}

void find_square(s_t *s, int i, int j)
{
    s->place.x = ( s->place.x < 0) ? 0 : s->place.x;
    s->place.y = ( s->place.y < 0) ? 0 : s->place.y;
    for (int k = 0; s->tab[i + k] != NULL && k <= s->square_sz + 1; k += 1)
        for (int l = 0; s->tab[i + k][j + l] &&
        l <= s->square_sz + 1; l += 1) {
            if (s->tab[i + k][j + l] != '.')
                return;
            if (k == l && k > s->square_sz) {
                s->place.y = i;
                s->place.x = j;
                s->square_sz = k;
            }
        }
}

void loop_map(s_t *s)
{
    for (int i = 1; s->tab[i] != NULL; i += 1)
        for (int j = 0; s->tab[i][j] != '\0'; j += 1)
            if (s->tab[i][j] == '.')
                find_square(s, i, j);
    if (s->square_sz != -1)
        print_line(s);
}