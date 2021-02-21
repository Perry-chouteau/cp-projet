/*
** EPITECH PROJECT, 2020
** Bootcamp
** File description:
** star.h
*/

#ifndef STAR_H
#define STAR_H

#include "phoenix.h"

typedef struct
{
    int trg_u;
    int sp_sv;
    int nl_sv;
    int nr_sv;
}star_t;

int my_star(int n);
int star1();
int star_p(int nb);
int star_imp(int nb);
#endif