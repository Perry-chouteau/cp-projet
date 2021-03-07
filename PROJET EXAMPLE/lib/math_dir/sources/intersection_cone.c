/*
** EPITECH PROJECT, 2020
** B-MAT-100-PAR-1-3-bs104intersection-perry.chouteau
** File description:
** intersec__sphere.c
*/

#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include "../includes/math.h"

float *intersection_cone(float *p, float *vect, float angl_deg)
{
    float *abc = malloc(sizeof(float) * 3);
    float *itsc;
    abc[0] = pow(vect[0], 2) + pow(vect[1], 2) -    \
    pow(tan(angl_deg / 180 * PI), 2) * pow(vect[2], 2);
    abc[1] = 2 * (p[0] * vect[0] + p[1] * vect[1] - \
    pow(tan(angl_deg / 180 * PI), 2) *  vect[2] * p[2]);
    abc[2] = pow(p[0], 2) + pow(p[1], 2) -  \
    pow(tan(angl_deg / 180 * PI), 2) * pow(p[2], 2);
    return abc;
}