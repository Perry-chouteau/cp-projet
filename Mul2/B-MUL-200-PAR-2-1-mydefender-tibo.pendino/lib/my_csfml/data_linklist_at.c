/*
** EPITECH PROJECT, 2020
** B-MUL-mydefender-perry.chouteau
** File description:
** csfml_data_linklist.c
*/

#include "my_csfml.h"

void csfml_init_rect_at(csfml_cell_t **list, rect_t rect, int pos)
{
    csfml_cell_t *cur = list[0];
    data_t data;

    for (int i = 0; i < pos && cur->next != NULL; i += 1)
        cur = cur->next;
    data = cur->data;
    data.rect = rect;
    cur->data = data;
}

void csfml_init_scale_at(csfml_cell_t **list, sfVector2f scale, int pos)
{
    csfml_cell_t *cur = list[0];
    data_t data;

    for (int i = 0; i < pos && cur->next != NULL; i += 1)
        cur = cur->next;
    data = cur->data;
    data.scl = scale;
    cur->data = data;
}

void csfml_init_pos_at(csfml_cell_t **list, sfVector2f vpos, int pos)
{
    csfml_cell_t *cur = list[0];
    data_t data;

    for (int i = 0; i < pos && cur->next != NULL; i += 1)
        cur = cur->next;
    data = cur->data;
    data.pos = vpos;
    cur->data = data;
}