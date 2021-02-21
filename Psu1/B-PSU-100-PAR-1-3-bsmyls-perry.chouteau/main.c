/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include "includes/my_ls.h"

int main(int ac, char ** argv)
{
    char *name = argv[1];
    int i;
    int x;

    for (i = 0; name[i] != '\0'; i += 1);
    for (;name[i] != '/';i -= 1 );
    i += 1;
    putstr_my_ls("name: ");
    for (; name[i + 1] != '\0'; i += 1) {
        putchar_bs_myls(name[i]);
    }
    putchar_bs_myls('\n');
}

int main(int ac, char ** argv)
{
    struct stat stats;
    char *path = argv[1];
    
    stat(path,stats)
}
