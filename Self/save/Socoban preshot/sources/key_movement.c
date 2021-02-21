/*
** EPITECH PROJECT, 2020
** Socoban preshot
** File description:
** key_movement.c
*/

#include "../includes/include.h"


int key_down(s_t *s)
{
    if (s->tab[s->p_pos.y + 1][s->p_pos.x] != '#') {
        if (s->tab[s->p_pos.y + 1][s->p_pos.x] == ' ' || 
        s->tab[s->p_pos.y + 1][s->p_pos.x] == 'X') {
            s->tab[s->p_pos.y][s->p_pos.x] = ' ';
            s->tab[s->p_pos.y + 1][s->p_pos.x] = 'P';
            s->p_pos.y += 1;
        } else if (s->tab[s->p_pos.y + 1][s->p_pos.x] == 'O' &&
        (s->tab[s->p_pos.y + 2][s->p_pos.x] == ' ' ||
        s->tab[s->p_pos.y + 2][s->p_pos.x] == 'X')) {
            s->tab[s->p_pos.y][s->p_pos.x] = ' ';
            s->tab[s->p_pos.y + 1][s->p_pos.x] = 'P';
            s->tab[s->p_pos.y + 2][s->p_pos.x] = 'O';
            s->p_pos.y += 1;
        }
    }
    return 0;
}

int key_up(s_t *s)
{
    if (s->tab[s->p_pos.y - 1][s->p_pos.x] != '#') {
        if (s->tab[s->p_pos.y - 1][s->p_pos.x] == ' ' || 
        s->tab[s->p_pos.y - 1][s->p_pos.x] == 'X') {
            s->tab[s->p_pos.y][s->p_pos.x] = ' ';
            s->tab[s->p_pos.y - 1][s->p_pos.x] = 'P';
            s->p_pos.y -= 1;
            return 0;
        }
        if (s->tab[s->p_pos.y - 1][s->p_pos.x] == 'O' &&
        (s->tab[s->p_pos.y - 2][s->p_pos.x] == ' ' ||
        s->tab[s->p_pos.y - 2][s->p_pos.x] == 'X')) {
            s->tab[s->p_pos.y][s->p_pos.x] = ' ';
            s->tab[s->p_pos.y - 1][s->p_pos.x] = 'P';
            s->tab[s->p_pos.y - 2][s->p_pos.x] = 'O';
            s->p_pos.y -= 1;
        return 0;
        }
    }
    return 0;
}

int key_left(s_t *s)
{
    if (s->tab[s->p_pos.y][s->p_pos.x - 1] != '#') {
        if (s->tab[s->p_pos.y][s->p_pos.x - 1] == ' ' || 
        s->tab[s->p_pos.y][s->p_pos.x - 1] == 'X') {
            s->tab[s->p_pos.y][s->p_pos.x] = ' ';
            s->tab[s->p_pos.y][s->p_pos.x - 1] = 'P';
            s->p_pos.x -= 1;
            return 0;
        }
        if (s->tab[s->p_pos.y][s->p_pos.x - 1] == 'O' &&
        (s->tab[s->p_pos.y][s->p_pos.x - 2] == ' ' ||
        s->tab[s->p_pos.y][s->p_pos.x - 2] == 'X')) {
            s->tab[s->p_pos.y][s->p_pos.x] = ' ';
            s->tab[s->p_pos.y][s->p_pos.x - 1] = 'P';
            s->tab[s->p_pos.y][s->p_pos.x - 2] = 'O';
            s->p_pos.x -= 1;
        return 0;
        }
    }
    return 0;
}

int key_right(s_t *s)
{
    if (s->tab[s->p_pos.y][s->p_pos.x + 1] != '#') {
        if (s->tab[s->p_pos.y][s->p_pos.x + 1] == ' ' || 
        s->tab[s->p_pos.y][s->p_pos.x + 1] == 'X') {
            s->tab[s->p_pos.y][s->p_pos.x] = ' ';
            s->tab[s->p_pos.y][s->p_pos.x + 1] = 'P';
            s->p_pos.x += 1;
            return 0;
        }
        if (s->tab[s->p_pos.y][s->p_pos.x + 1] == 'O' &&
        (s->tab[s->p_pos.y][s->p_pos.x + 2] == ' ' ||
        s->tab[s->p_pos.y][s->p_pos.x + 2] == 'X')) {
            s->tab[s->p_pos.y][s->p_pos.x] = ' ';
            s->tab[s->p_pos.y][s->p_pos.x + 1] = 'P';
            s->tab[s->p_pos.y][s->p_pos.x + 2] = 'O';
            s->p_pos.x += 1;
        return 0;
        }
    }
    return 0;
}

int changes(s_t *s)
{
    switch (s->ch) {
        case KEY_DOWN: 
            mvprintw(2, 16, "D");
            key_down(s);
            break;
        case KEY_UP:
            mvprintw(2, 16, "U");
            key_up(s);
            break;
        case KEY_LEFT:
            mvprintw(2, 16, "L");
            key_left(s);
            break;
        case KEY_RIGHT:
            mvprintw(2, 16, "R");
            key_right(s);
            break;
    }
    return 0;
}