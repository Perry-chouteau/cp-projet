/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bspushswap-perry.chouteau
** File description:
** test.c
*/

#include "../includes/intersection.h"

is_t init_test(is_t is)
{
    is.ac = 3;
    return is;
}

Test (init_test, index1_greater_than_index2)
{
    is_t is = init_test(is);

    cr_assert_eq(is.ac, 3);
}