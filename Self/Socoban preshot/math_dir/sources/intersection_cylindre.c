/*
** EPITECH PROJECT, 2020
** B-MAT-100-PAR-1-3-bs104intersection-perry.chouteau
** File description:
** intersec__sphere.c
*/

#include <stdlib.h>
#include <stddef.h>

float *intersection_cylindre(float *p, float *vect, float r)
{
    float *abc = malloc(sizeof(float) * 3);
    float *itsc;
    int nb_sols;

    if (r <= 0)
        exit(84);
    abc[0] = (vect[0] * vect[0]) + (vect[1] * vect[1]);
    abc[1] = 2 * ((p[0] * vect[0]) + (p[1] * vect[1]));
    abc[2] = (p[0] * p[0]) + (p[1] * p[1]);
    abc[2] -= (r * r);
    return abc;
}