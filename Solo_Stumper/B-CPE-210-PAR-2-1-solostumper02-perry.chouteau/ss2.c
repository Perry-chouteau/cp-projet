/*
** EPITECH PROJECT, 2020
** Solo_Stumper
** File description:
** ss1.c
*/

#include "unistd.h"
#include "stdlib.h"

int my_strlen(char * c)
{
    int sz = 0;

    for (; c[sz] != '\0'; sz += 1);
    return (sz - 1);
}

int cond(char **av, int i, int sz)
{
    if (av[1][i] != av[1][sz]) {
        if (av[1][i] >= 65 && av[1][i] <= 90 && (av[1][i] + 32) == (av[1][sz]));
        else if (av[1][i] >= 97 && av[1][i] <= 122 &&   \
        (av[1][i] - 32) == (av[1][sz]));
        else {
            write(1, "not a palindrome.\n", 19);
            return 1;
        }
    }
    return 0;
}

int main(int ac, char **av)
{
    if (ac != 2)
        return 84;
    int sz = my_strlen(av[1]);
    if (sz < 0)
        return 84;
    for (int i = 0; i < sz; i += 1 , sz -= 1) {
        if (cond(av, i, sz) == 1)
            return 0;
    }
    write(1, "palindrome!\n", 12);
    return 0;
}