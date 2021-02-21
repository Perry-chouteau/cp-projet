/*
** EPITECH PROJECT, 2020
** Bootcamp
** File description:
** phoenix.h
*/

#ifndef PHOENIX_H
#define PHOENIX_H

#include <stdlib.h>

void my_putchar(char c);
int show_number(int nb);
int show_string(char const *str);
char *reverse_string(char *str);
int to_number(char const *str);
int is_prime_number(int nb);
char *my_strcpy(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strstr(char *str, char const *to_find);
int my_str_isnum(char const *str);
int my_strcmp(char const *s1, char const *s2);

#endif