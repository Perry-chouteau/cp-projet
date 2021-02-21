
/*
** EPITECH PROJECT, 2020
** B-EXAMPLE-100-PAR-1-3-example-perry.chouteau
** File description:
** empty_linked_cell_t.c
*/

#include "../../includes/defender.h"

static csfml_cell_t *csfml_createcell(data_t data)
{
    csfml_cell_t *cell = malloc(sizeof(csfml_cell_t));

    if (cell == NULL)
        return NULL;
    cell->data = data;
    cell->next = NULL;
    return cell;
}

void csfml_add_at(csfml_cell_t **list, data_t data, int pos)
{
    csfml_cell_t *cell = csfml_createcell(data);
    csfml_cell_t *prec = list[0];
    csfml_cell_t *cur = list[0];
    int i = 0;

    if (list[0] == NULL) {
        list[0] = cell;
        return ;
    } else if (pos <= 0) {
        cell->next = list[0];
        return ;
    }
    while (i < pos && cur != NULL) {
        i += 1;
        prec = cur;
        cur = cur->next;
    }
    prec->next = cell;
    cell->next = cur;
}

data_t csfml_get_at(csfml_cell_t **list, int pos)
{
    csfml_cell_t *cur = *list;
    for (int i = 0; i < pos && cur->next != NULL; i += 1)
        cur = cur->next;
    return cur->data;
}

void csfml_set_at(csfml_cell_t **list, data_t data, int pos)
{
    csfml_cell_t *cur = list[0];

    for (int i = 0; i < pos && cur->next != NULL; i += 1) {
        cur = cur->next;
    }
    cur->data = data;
}

void csfml_free_at(csfml_cell_t **list, int pos)
{
    csfml_cell_t *prec = list[0];
    csfml_cell_t *cur = list[0];

    if (list[0] == NULL)
        return ;
    if (pos <= 0 || cur->next == NULL) {
        list[0] = list[0]->next;
        free(prec);
        return ;
    }
    for (int i = 0; i < pos && cur->next != NULL; i += 1) {
        prec = cur;
        cur = cur->next;
    }
    if (cur->next != NULL)
        prec->next = cur->next;
    else
        prec->next = NULL;
    free(cur);
}