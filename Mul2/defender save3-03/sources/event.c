/*
** EPITECH PROJECT, 2020
** B-MUL-200-PAR-2-1-mydefender-tibo.pendino
** File description:
** event.c
*/

#include "../includes/include.h"

int check_event_close( game_t *def)
{
    if (def->event.type == sfEvtClosed ||
    sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(def->window);
    return 0;
}

int check_event(game_t *def)
{
    check_event_close(def);
    return 0;
}