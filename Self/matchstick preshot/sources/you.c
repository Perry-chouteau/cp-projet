/*
** EPITECH PROJECT, 2020
** matchstick preshot
** File description:
** getline_lm.c
*/

#include "../includes/include.h"

int get__line(s_t *s)
{
    char *str;

    for (int n = 0; 1; n = 0) {
        my_printf("Line: ");
        str = str_term_isnum(my_termline());
        if (str == NULL) {
            write(2, "Not a number\n", 14);
            continue;
        } s->turn.line = my_getnbr(str);
        if (s->turn.line <= 0 || s->turn.line > s->stick.line) {
            write(2, "This line doesn't exist\n", 25);
            continue;
        }
        for (int i = 0; s->tab[s->turn.line][i] != '\0'; i += 1)
            n += (s->tab[s->turn.line][i] == '|') ? 1: 0;
        if (n <= 0) {
            write(2, "No stick on this line\n", 23);
            continue;
        }
        return 0;
    }
}

int get__stick(s_t *s)
{
    char *str;

    for (int n = 0; 1; n = 0) {
        my_printf("Match: ");
        str = str_term_isnum(my_termline());
        if (str == NULL) {
            write(2, "Not a number\n", 14);
            continue;
        } s->turn.max = my_getnbr(str);
        if (s->turn.max <= 0 || s->turn.max > s->stick.max) {
            write(2, "This number is out of range\n", 29);
            continue;
        }
        for (int i = 0; s->tab[s->turn.line][i] != '\0'; i += 1)
            n += (s->tab[s->turn.line][i] == '|') ? 1: 0;
        if (n == 0 || n < s->turn.max) {
            write(2, "Not enought stick in this line\n", 32);
            continue;
        }
        return s->turn.max;
    }
}

int matchstick_you(s_t *s)
{
    get__line(s);
    get__stick(s);
    del__stick(s);
    return 0;
}