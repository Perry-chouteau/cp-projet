/*
** EPITECH PROJECT, 2020
** rush 2
** File description:
** find alphabet charactere
*/

#include <unistd.h>
#include "include/my.h"

void display_result(char l,char nb)
{
    my_putchar(l);
    my_putchar(':');
    my_put_nbr(nb);
    my_putchar('\n');
}

void divergent_string(char **argv,int j,char l,int nb)
{
    for (j=0; argv[1][j] != '\0'; j += 1)
        if ( argv[1][j] == l || argv[1][j] == l + 32)
            nb += 1;
    display_result(l, nb);
}

void find(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    char l= 0;
    int nb = 0;

    for (i = 2;i != argc; i += 1) {
        l = argv[i][0];
        nb = 0;
        divergent_string(argv, j, l, nb);
    }
}

int main(int argc, char **argv)
{
    find(argc,argv);
    return 0;
}
