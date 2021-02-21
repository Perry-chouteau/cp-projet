/*
** EPITECH PROJECT, 2020
** test of revstr
** File description:
** test the reverse string function
*/

#include  <criterion/criterion.h>

Test(my_strncpy , copy_five_characters_in_empty_array)
{
    char  dest [6] = {0};

    my_revstr(dest , "hello", 5);
    cr_assert_str_eq(dest , "olleh");
}
