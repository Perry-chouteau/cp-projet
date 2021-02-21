/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-bsminishell1-perry.chouteau
** File description:
** step3.c
*/

#include "../includes/include.h"

void print_arg(char **arg)
{
    for (arg += 1; * arg; arg += 1) {
        for (;**arg; *arg += 1) {
            if (**arg != ' ')
                write (1, &**arg, 1);
            if (**arg == ' ' && (**arg - 1) != ' ')
                write (1, "\n", 1);
        }
        write (1, "\n", 1);
    }
}

int main(int ac, char **av)
{
    print_arg(av);
    return 0;
}
