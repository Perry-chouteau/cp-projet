/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-mydefender-perry.chouteau
** File description:
** pos.c
*/

#include "../includes/defender.h"

int round_enemy(csfml_cell_t **cell, int round)
{
    data_t data = csfml_create_data("image/amongus.png");
    for (int i = 0; i < round; i += 1) {
        data.pos.x = i;
        csfml_add_at(cell, data, i);
        printf("%f\n", data.pos.x);
    }
}

int changes(game_t *def)
{
    if (def->enemy[0] == NULL) {
        def->round += 1;
        round_enemy(def->enemy, def->round);
    }
    return 0;
}