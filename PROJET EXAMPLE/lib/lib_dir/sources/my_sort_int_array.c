/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** sort int array
*/

#include "../includes/my.h"

void my_sort_int_array(int *tab, int size)
{
    int   i;
    int   srt = 0;
    int   nb = 0;

    for (;srt == 0; srt = 1, nb += 1)
        for (i = 0 ;(i + 1) < size; i += 1)
            if (tab[i] > tab[i + 1]) {
                srt = 0;
                my_swap(&tab[i], &tab[i + 1]);
            }
}

