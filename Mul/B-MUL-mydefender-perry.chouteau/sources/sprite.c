/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-mydefender-perry.chouteau
** File description:
** sprite.c
*/

#include "../includes/defender.h"

int draw_image(game_t *def, sfRenderWindow *window)
{
    for (int i = 0; i < def->n_bloc; i += 1) {
        sfRenderWindow_drawSprite(def->window, def->bloc[i].spr, NULL);
    }
    csfml_print_list(def->window, def->enemy);
    return 0;
}
