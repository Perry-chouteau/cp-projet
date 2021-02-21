/*
** EPITECH PROJECT, 2020
** test_disp_stdarg.c
** File description:
** test_disp_stdarg.c
*/

#include <../includes/bsprintf.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(disp_stdarg , basic , .init=cr_redirect_stdout)
{
    disp_stdarg("csiis",'X', "hi", 10, -3, "plop");
    cr_assert_stdout_eq_str("X\nhi\n10\n-3\nplop\n", "");
}

