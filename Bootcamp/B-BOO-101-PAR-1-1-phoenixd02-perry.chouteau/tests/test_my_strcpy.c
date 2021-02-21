/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd02-perry.chouteau
** File description:
** test_my_strcpy.c
*/

#include <criterion/criterion.h>
#include <string.h>
#include <stdio.h>

char *my_strcpy(char *dest, char const *src);

Test(my_strcpy, test_my_strcpy)
{
    char dest[8];
    my_strcpy(dest, "Bonjour");
    cr_assert_str_eq(dest, "Bonjour");
}

Test(my_strcpy, test_my_strcpy_my_strcpy0)
{
    char my_dest[9];
    char dest[9];
    my_strcpy(my_dest, "Bonjour");
    strcpy(dest, "Bonjour");
    cr_assert_str_eq(my_dest, dest);
}

Test(my_strcpy, test_my_strcpy_my_strcpy1)
{
    char my_dest[9];
    char dest[9];
    my_strcpy(my_dest, "azerty24");
    strcpy(dest, "azerty24");
    cr_assert_str_eq(my_dest, dest);
}

Test(my_strcpy, test_my_strcpy_my_strcpy2)
{
    char my_dest[11];
    char dest[11];
    my_strcpy(my_dest, "0123456789");
    strcpy(dest, "0123456789");
    cr_assert_str_eq(my_dest, dest);
}

Test(my_strcpy, test_my_strcpy_my_strcpy3)
{
    char my_dest[9];
    char dest[9];
    my_strcpy(my_dest, "b9('c)'e");
    strcpy(dest, "b9('c)'e");
    cr_assert_str_eq(my_dest, dest);
}

Test(my_strcpy, test_my_strcpy_my_strcpy4)
{
    char my_dest[2];
    char dest[2];
    my_strcpy(my_dest, "\\");
    strcpy(dest, "\\");
    cr_assert_str_eq(my_dest, dest);
}

Test(my_strcpy, test_my_strcpy_my_strcpy5)
{
    char my_dest[10];
    char dest[10];
    my_strcpy(my_dest, "\n   _/-*+");
    strcpy(dest, "\n   _/-*+");
    cr_assert_str_eq(my_dest, dest);
}