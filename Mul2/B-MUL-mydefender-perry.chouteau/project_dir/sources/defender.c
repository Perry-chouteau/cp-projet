/*
** EPITECH PROJECT, 2020
** B-MUL-200-PAR-2-1-mydefender-tibo.pendino
** File description:
** defender.c
*/

#include "../includes/include.h"

int defender(int ac, char **av)
{
    game_t *def = malloc(sizeof(game_t));

    init(def, ac, av);
    while (sfRenderWindow_isOpen(def->window)) {
        while (sfRenderWindow_pollEvent(def->window, &def->event))
            check_event(def);
        changes(def);
        draw_image(def);
        sfRenderWindow_display(def->window);
        sfRenderWindow_clear(def->window, sfWhite);
    }
    to_destruct(def);
    return 0;
}