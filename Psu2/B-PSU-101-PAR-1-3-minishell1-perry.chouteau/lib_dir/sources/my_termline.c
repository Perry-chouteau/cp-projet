/*
** EPITECH PROJECT, 2020
** B-EXAMPLE-100-PAR-1-3-example-perry.chouteau
** File description:
** my_term_line.c
*/

#include "../includes/my.h"

char *my_termline(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t lensz = 0;
    lensz = getline(&line, &len, stdin);

    if (lensz == EOF || my_strncmp(line, "exit", 4) == 0)
        exit(0);
    line[lensz - 1] = '\0';
    return line;
}