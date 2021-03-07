/*
** EPITECH PROJECT, 2020
** B-EXAMPLE-100-PAR-1-3-example-perry.chouteau
** File description:
** my_term_line.c
*/

#include <stdio.h>
#include <stdlib.h>

char *my_termline(void)
{
    char *line = NULL;
    size_t len = 0;
    getline(&line, &len, stdin);
    return line;
}