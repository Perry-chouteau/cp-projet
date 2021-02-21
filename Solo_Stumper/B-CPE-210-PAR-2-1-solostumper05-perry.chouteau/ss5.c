/*
** EPITECH PROJECT, 2020
** Solo_Stumper
** File description:
** ss5.c
*/

#include <unistd.h>
#include <stdlib.h>

char *del_mult_space(char *str);

int my_strlen(char *str)
{
    int i;

    for (i = 0; str[i]; i += 1);
    return i;
}

int main(int ac, char **av)
{
    char *str;
    int sz;
    char *tmp;
    int i;

    if (ac == 1) {
        write(1, "\n", 1);
        return 0;
    } else if (ac != 2)
        return 84;
    str = del_mult_space(av[1]);
    for (sz = 0; str[sz] != ' ' && str[sz]; sz += 1);
    tmp = malloc(sizeof(char) * sz);
    for (i = 0; str[i] != ' ' && str[i]; i += 1)
        tmp[i] = str[i];
    for (i = 0; str[i + sz]; i += 1)
        str[i] =  str[i + sz];
    str[i] = ' ';
    for (int j = 1; str[i] && tmp[i]; j += 1)
        str[i + j] = tmp[j - 1];
    write(1, del_mult_space(str), my_strlen(del_mult_space(str)));
}