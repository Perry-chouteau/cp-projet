/*
** EPITECH PROJECT, 2020
** test ex1
** File description:
** test ex1
*/

#include <../includes/bs101pong.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(xyz_in_vector, tests_ex1)
{
    double xyz[3] = {33.33333, 33.33333, 33.33333};
    double *value = xyz_in_vector(xyz, 33.33333, 33.33333, 33.33333);
    cr_assert_eq(value[0], 33.33333);
}
