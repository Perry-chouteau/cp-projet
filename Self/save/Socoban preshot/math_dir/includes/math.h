/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** definition de fonction
*/

#ifndef MATH_H
#define MATH_H

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <math.h>
#include "../../lib_dir/includes/my.h"

#define PI acos(-1.0)

typedef struct
{
    int x;
    int y;
}vec2i_t;

typedef struct
{
    int x;
    int y;
    int z;
}vec3i_t;


typedef struct
{
    double x;
    double y;
}vec2f_t;

typedef struct
{
    double x;
    double y;
    double z;
}vec3f_t;

//////////////////////equation quadratique///////////

//intersection (equation quadratique)
float *intersection_sphere(float *p, float *vect, float r);
float *intersection_cylindre(float *p, float *vect, float r);
float *intersection_cone(float *p, float *vect, float angl_deg);
//point, vector, coef /
float *def_line_pos(float *p, float *vect, float t);
//solution (equation quadratique)
float *equadra_solut(float a, float b, float c);
//nombre de solution (equation quadratique)
int equadra_nb_solut(float a, float b, float c);
//delta (equation quadratique)
float equadra(float a, float b, float c);
double f_x(double *f, double x);
double fp_x(double *f, double x);

#endif
