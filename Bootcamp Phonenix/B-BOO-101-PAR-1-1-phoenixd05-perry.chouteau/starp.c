/*
** EPITECH PROJECT, 2020
** Bootcamp
** File description:
** starp.c
*/

#include "includes/star.h"

star_t up(star_t s, int n)
{
    for (int i = 1; i < (n * 3); i += 1)
        my_putchar(' ');
    show_string("*\n");
    for (int i = 0, sp = 2; i < (n - 1); i += 1, sp += 1) {
        for (int j = 0; j < ((n * 3) - sp); j += 1)
            my_putchar(' ');
        show_string("* ");
        for (int j = 0; j < ((sp + i) - 2); j += 1)
            my_putchar(' ');
        show_string("*\n");
        s.trg_u = i;
        s.sp_sv = sp;
    }
    for (int j = -1; j < n * 2; j += 1)
        my_putchar('*');
    for (int j = 0; j < ((s.sp_sv + s.trg_u) - 1); j += 1)
        my_putchar(' ');
    for (int j = -1; j < n * 2; j += 1)
        my_putchar('*');
    return s;
}

star_t midup_p(star_t s, int n)
{
    s.nl_sv = (n - 1);
    s.nr_sv = (n + 1);
    int i;
    int j;
    for (i = 0; i < (n - 1); i += 1, s.nl_sv -= 1, s.nr_sv -= 1) {
        for (j = 0; j < (n - s.nl_sv); j += 1)
            my_putchar(' ');
        show_string("*");
        j = 0;
        for (;  \
        j < (((2 * s.nl_sv) + 1) + ((2 * (n - 2)) + 1) + ((2 * n) - 1)); j += 1)
            my_putchar(' ');
        show_string("*\n");
    }
    return s;
}

star_t middown_p(star_t s, int n)
{
    s.nl_sv += 1;
    s.nr_sv += 1;
    int i;
    for ( i = 0; i < (n - 1); i += 1, s.nl_sv += 1, s.nr_sv += 1) {
        for (int j = 0; j < (n - s.nl_sv); j += 1)
            my_putchar(' ');
        show_string("*");
        for (int j = 0; \
        j < (((2 * s.nl_sv) + 1) + ((2 * (n - 2)) + 1) + ((2 * n) - 1)); j += 1)
            my_putchar(' ');
        show_string("*\n");
    }
    return s;
}

star_t down(star_t s, int n)
{
    for (int j = -1; j < n * 2; j += 1)
        my_putchar('*');
    for (int j = 0; j < ((s.sp_sv + s.trg_u) - 1); j += 1)
        my_putchar(' ');
    for (int j = -1; j < n * 2; j += 1)
        my_putchar('*');
    my_putchar('\n');
    for (; s.trg_u >= 0; s.trg_u -= 1, s.sp_sv -= 1) {
        for (int j = 0; j < ((n * 3) - s.sp_sv); j += 1)
            my_putchar(' ');
        show_string("* ");
        for (int j = 0; j < ((s.sp_sv + s.trg_u) - 2); j += 1)
            my_putchar(' ');
        show_string("*\n");
    }
    for (int i = 1; i < (n * 3); i += 1)
        my_putchar(' ');
    show_string("*\n");
    return s;
}

int star_p(int n)
{
    star_t s;
    s = up(s, n);
    my_putchar('\n');
    s = midup_p(s, n);
    if (n % 2 == 1) {
        for (int i = 0; i < n; i += 1)
            my_putchar(' ');
        my_putchar('*');
        for (int i = 0; i < (2 * (n) + 1 + (2 * (n - 2))); i += 1)
            my_putchar(' ');
        show_string("*\n");
    }
    s = middown_p(s, n);
    s = down(s, n);
    return 0;
}