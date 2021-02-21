/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bspushswap-perry.chouteau
** File description:
** test.c
*/

#include "../includes/bs_push_swap.h"

Test (swap_elem, index1_greater_than_index2)
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int idx1 = 2;
    int idx2 = 4;
    swap_elem(array, idx1, idx2);
    cr_assert_eq(array[idx1], 5);
    cr_assert_eq(array[idx2], 3);
}