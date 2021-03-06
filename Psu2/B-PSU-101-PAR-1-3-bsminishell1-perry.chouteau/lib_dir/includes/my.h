/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** definition de fonction
*/

#ifndef MY_H
#define MY_H

//  lib
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

// sys & bits
#include <sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

//math
int my_str_isnum(char const *str);
int my_isneg(int nb);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
double my_atof(char *str);

int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
float my_sqrt(int nb);

//write
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_showstr(char const *str);

//str
void my_swap(int *a, int *b);

int my_strlen(char const *str);
int my_str_isalpha(char const *str);
int my_str_isprintable(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
int my_showmem(char const *str, int size);

char *my_revstr(char *str);
char *my_strcapitalize(char *str);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char *src, int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strdup(char const *src);
char *my_term_line(void);

#endif
