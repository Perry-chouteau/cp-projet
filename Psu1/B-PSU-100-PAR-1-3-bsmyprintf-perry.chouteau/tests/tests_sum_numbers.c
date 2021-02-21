/*
** EPITECH PROJECT, 2020
** tests_sum_numbers.c
** File description:
** tests_sum_numbers.c
*/

#include <../includes/bsprintf.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(sum_numbers , return_correct_when_i_is_zero)
{
    int  ret = sum_numbers(3, 21, 25,  -4);
    cr_assert_eq(ret, 42);
}

Test(sum_numbers , sum_integer_values)
{
    int  value = sum_numbers(3, 1, 2, 3);
    cr_assert_eq(value, 6);
}
