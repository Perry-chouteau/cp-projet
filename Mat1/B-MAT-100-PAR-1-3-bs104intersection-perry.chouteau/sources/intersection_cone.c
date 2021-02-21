/*
** EPITECH PROJECT, 2020
** B-MAT-100-PAR-1-3-bs104intersection-perry.chouteau
** File description:
** intersec__sphere.c
*/

#include "../includes/intersection.h"

/*float *intersection_cone(float *p, float *vect, float r)
{
    float *abc = malloc(sizeof(float) * 3);
    float *itsc;
    abc[0] = (vect[0] * vect[0]) + (vect[1] * vect[1]) + (vect[2] * vect[2]);
    abc[1] = (p[0] * vect[0]) + (p[1] * vect[1]) + (p[2] * vect[2]);
    abc[2] = (p[0] * p[0]) + (p[1] * p[1]) + (p[2] * p[2]);
    abc[2] -= r;
    return abc;
}*/

/*|   ./intersection | p[0], p[1], p[2], vect[0], vect[1], vect[2], t    |*/

int main(int ac, char **av)
{
    float *p = malloc(sizeof(float) * 3);
    float *vect = malloc(sizeof(float) * 3);
    float t = atof(av[7]);
    float *res;

    for (int i = 0; i < 3; i += 1)
        p[i] = atof(av[1 + i]);
    for (int i = 0; i < 3; i += 1)
        vect[i] = atof(av[4 + i]);
    t = atof(av[7]);
    /*res = intersection_cone(p, vect, t);
    printf("%f\n", res[0]);
    printf("%f\n", res[1]);
    printf("%f\n", res[2]);
    printf("\n");*/
    return 0;
}