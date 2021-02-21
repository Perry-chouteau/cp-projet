/*
** EPITECH PROJECT, 2020
** B-PSU-100-PAR-1-3-myls-perry.chouteau
** File description:
** main_ls.c
*/

#include "../includes/my_ls.h"

void describe(void)
{
    my_printf("Usage: ls -[OPTION]... [FILE]...\n");
    my_printf("Options are : \n");
    my_printf("-l : Long listing format\n");
    my_printf("-r : reverse order while sorting\n");
    my_printf("-d : list directories themselves, not their contents\n");
    my_printf("-R : list subdirectories recursively\n");
    my_printf("-t : sort by modification time, newest first\n");
    exit(0);
}

int ls_only(int ac, char **av)
{
    DIR *repo = NULL;
    struct dirent *rd_file = NULL;

    repo = opendir("./");
    while ((rd_file = readdir(repo)) != NULL) {
        if (rd_file->d_name[0] != '.')
            my_printf("%s ", rd_file->d_name);
    }
    my_printf("\n");
    exit(0);
}

void ls_flag(int ac, char **av)
{
    if (av[1][1] = 'r')
        exit(84);
    if (av[1][1] = 'l')
        exit(84);
    if (av[1][1] = 'R')
        exit(84);
    exit(84);
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        describe();
    if (ac == 2 && av[1][0] != '-')
        ls_dir1(ac, av);
    if (ac > 2 && av[1][0] != '-')
        ls_dir2(ac, av);
    if (ac > 1 && av[1][0] == '-')
        ls_flag(ac, av);
    if (ac == 1)
        ls_only(ac, av);
    return 84;
}