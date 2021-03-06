/*
** EPITECH PROJECT, 2020
** B-MUL-200-PAR-2-1-mydefender-tibo.pendino
** File description:
** data_create.c
*/

#include "../includes/linklist.h"

csfml_cell_t *csfml_empty_list(void)
{
    return NULL;
}

int csfml_len_list(csfml_cell_t **list)
{
    csfml_cell_t *cur = list[0];
    int i = 1;

    for (; cur->next != NULL; i += 1)
        cur = cur->next;
    return i;
}

void csfml_free_list(csfml_cell_t **list)
{
    csfml_cell_t *prec = list[0];

    while (list[0] != NULL) {
        list[0] = list[0]->next;
        free(prec);
        prec = list[0];
    }
}

void csfml_print_list(sfRenderWindow *window, csfml_cell_t **list)
{
    csfml_cell_t *cur = list[0];

    for (; cur != NULL; cur = cur->next) {
        sfSprite_setPosition(cur->data.spr, cur->data.pos);
        sfRenderWindow_drawSprite(window, cur->data.spr, NULL);
    }
}