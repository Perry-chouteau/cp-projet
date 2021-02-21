/*
** EPITECH PROJECT, 2020
** BTTF_BSQ
** File description:
** keep_map.c
*/

#include "../includes/include.h"

int str_to_tab(s_t *s)
{
    s->tab = malloc(sizeof(char *) * s->tab_sz.y + 1);
    s->tab[s->tab_sz.y] = NULL;
    for (int i = 0, k = 0, j; i < s->tab_sz.y; i += 1, k += 1) {
        for (j = 0; s->buffer[k + j] != '\n' && s->buffer[k + j]; j += 1);
        if (i > 0 && i < s->tab_sz.y - 1 && j != s->tab_sz.x)
            return 84;
        s->tab[i] = malloc(sizeof(char) * j + 1);
        s->tab[i][j] = '\0';
        for (j = 0; s->buffer[k] != '\n' && s->buffer[k]; j += 1, k += 1)
            s->tab[i][j] = s->buffer[k];
    }
    return 0;
}