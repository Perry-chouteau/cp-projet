/*
** EPITECH PROJECT, 2020
** test
** File description:
** test
*/
#include <../includes/bsprintf.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(sum_strings_length, sum_str_lenght)
{
    int value = sum_strings_length(5, "Hello", "a", "toto", "", "plop");
    cr_assert_eq(value, 14);
}
