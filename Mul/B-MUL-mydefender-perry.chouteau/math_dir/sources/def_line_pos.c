/*
** EPITECH PROJECT, 2020
** B-MAT-100-PAR-1-3-bs104intersection-perry.chouteau
** File description:
** ex4.c
*/

#include "../includes/math.h"

float *def_line_pos(float *p, float *vect, float t)
{
    float *new_p = malloc(sizeof(float) * 3);
    for (int i = 0; i < 3; i += 1)
        new_p[i] = p[i] + vect[i] * t;
    return new_p;
}
