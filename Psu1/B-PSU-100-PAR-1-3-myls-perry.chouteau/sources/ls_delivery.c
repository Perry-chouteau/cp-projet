/*
** EPITECH PROJECT, 2020
** B-PSU-100-PAR-1-3-myls-perry.chouteau
** File description:
** ls_delivery.c
*/

#include "../includes/my_ls.h"

int ls_dir1(int ac, char **av)
{
    DIR *repo = NULL;
    struct dirent *rd_file = NULL;
    int i;

    repo = opendir(av[1]);
    while ((rd_file = readdir(repo)) != NULL)
        if (rd_file->d_name[0] != '.')
            my_printf("%s ", rd_file->d_name);
    my_printf("\n");
    exit(0);
}

int ls_dir2(int ac, char **av)
{
    DIR *repo = NULL;
    struct dirent *rd_file = NULL;
    int i;

    for (i = 1; i < ac; i += 1) {
        repo = opendir(av[i]);
        my_printf("%s:\n", av[i]);
        while ((rd_file = readdir(repo)) != NULL)
            if (rd_file->d_name[0] != '.') {
                my_printf("%s ", rd_file->d_name);
            }
        my_printf("\n");
        if (i < ac - 1)
            my_printf("\n");
    }
    exit(0);
}