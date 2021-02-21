/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-mydef-perry.chouteau
** File description:
** window.c
*/

#include "../includes/defender.h"

int set_all(game_t *def, int ac, char **av)
{
    init(def);
    return 0;
}

int main(int ac, char **av)
{
    game_t *def = malloc(sizeof(game_t));

    set_all(def, ac, av);
    while (sfRenderWindow_isOpen(def->window)) {
        while (sfRenderWindow_pollEvent(def->window, &def->event))
            check_event(def);
        changes(def);
        draw_image(def, def->window);
        sfRenderWindow_display(def->window);
        sfRenderWindow_clear(def->window, sfWhite);
    }
    to_destruct(def);
    return 0;
}