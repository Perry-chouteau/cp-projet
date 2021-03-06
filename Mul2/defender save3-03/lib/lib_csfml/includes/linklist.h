/*
** EPITECH PROJECT, 2020
** B-MUL-200-PAR-2-1-mydefender-tibo.pendino
** File description:
** music.h
*/


#ifndef CSFML_LINKLIST_H
#define CSFML_LINKLIST_H

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>

#include "object.h"
#include <stdlib.h>

typedef struct csfml_cell_s
{
    data_t data;
    struct csfml_cell_s *next;
}csfml_cell_t;

void csfml_add_at(csfml_cell_t **list, data_t data, int pos);
data_t csfml_get_at(csfml_cell_t **list, int pos);
void csfml_set_at(csfml_cell_t **list, data_t data, int pos);
void csfml_free_at(csfml_cell_t **list, int pos);

csfml_cell_t *csfml_empty_list(void);
int csfml_len_list(csfml_cell_t **list);
void csfml_free_list(csfml_cell_t **list);
void csfml_print_list(sfRenderWindow *window, csfml_cell_t **list);

void csfml_init_pos_at(csfml_cell_t **list, sfVector2f vpos, int pos);

#endif