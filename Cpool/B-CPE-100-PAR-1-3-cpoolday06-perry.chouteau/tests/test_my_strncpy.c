/*
** EPITECH PROJECT, 2020
** test_my_strncpy.c
** File description:
** test  strncpy
*/

#include  <criterion/criterion.h>

char *my_strncpy(char *dest, char  const *src,int n);

Test(my_strncpy, test)
{
    char  dest [6] = {0};
    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}
