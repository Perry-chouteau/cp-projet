/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bspushswap-perry.chouteau
** File description:
** test.c
*/

#include "../includes/include.h"

s_t init_test(s_t s)
{
    return s;
}

Test (init_test, index1_greater_than_index2)
{
    s_t s = init_test(s);

    cr_assert_eq(5, 5);
}