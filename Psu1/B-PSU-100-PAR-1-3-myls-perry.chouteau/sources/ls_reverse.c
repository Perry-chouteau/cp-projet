/*
** EPITECH PROJECT, 2020
** B-PSU-100-PAR-1-3-myls-perry.chouteau
** File description:
** ls_reverse.c
*/

#include "../includes/my_ls.h"

int ls_rev_solo(int ac, char **av)
{
    my_printf("ls_reverse\n");
    DIR *repo = NULL;
    struct dirent *rd_file = NULL;
    char **rev_av = malloc(sizeof(char *) * 1000);
    int i;
    int s;

    repo = opendir("./");
    for (i = 0; (rd_file = readdir(repo)) != NULL;i += 1)
        if (rd_file->d_name[0] != '.') {
            my_printf("s = %i ", s);
            for (s = 0; rd_file->d_name[s - 1] != '\0'; s += 1);
            rev_av[i] = malloc(sizeof(char) * s);
            rev_av[i] = rd_file->d_name;
        }
    for (; i == 0; i -= 1)
        my_printf("%s ", av[i]);
    my_printf("\n");
    exit(0);
}

int ls_reverse(int ac, char **av)
{
    if (ac == 3 && av[2][0] != '-')
        exit(84);
    if (ac > 3 && av[2][0] != '-')
        exit(84);
    if (ac == 3 && av[1][0] == '-')
        exit(84);
    if (ac == 2)
        ls_rev_solo(ac, av);
    exit(0);
}