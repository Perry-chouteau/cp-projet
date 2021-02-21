/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd02-perry.chouteau
** File description:
** test_my_strncmp.c
*/

#include <criterion/criterion.h>
#include <string.h>
#include <stdio.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, test_my_strcpy)
{
    int i = my_strncmp("a", "z", 1);
    cr_assert_eq(i, 'a' - 'z');
}

Test(my_strncmp, test_my_strcpy_my_strcpy)
{
    int i;
    int j;
    i = my_strncmp("Bonjour", "Bonkour", 5);
    j = strncmp("Bonjour", "Bonkour", 5);
    cr_assert_eq(i, j);
}

Test(my_strncmp, test_my_strcpy_my_strcpy2)
{
    int i;
    int j;
    i = my_strncmp("nope", "nope", 3);
    j = strncmp("nope", "nope", 3);
    cr_assert_eq(i, j);
}

Test(my_strncmp, test_my_strcpy_my_strcpy3)
{
    int i;
    int j;
    i = my_strncmp("nope", "nope", 5);
    j = strncmp("nope", "nope", 5);
    cr_assert_eq(i, j);
}

Test(my_strncmp, test_my_strcpy_my_strcpy4)
{
    int i;
    int j;
    i = my_strncmp("n", "n", 5);
    j = strncmp("n", "n", 5);
    cr_assert_eq(i, j);
}