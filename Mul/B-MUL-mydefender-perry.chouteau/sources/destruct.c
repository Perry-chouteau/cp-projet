/*
** EPITECH PROJECT, 2020
** init.c
** File description:
** init
*/

#include "../includes/defender.h"

int to_destruct(game_t *def)
{
    free(def);
    return 0;
}