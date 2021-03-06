/*
** EPITECH PROJECT, 2020
** project
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_defender.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}