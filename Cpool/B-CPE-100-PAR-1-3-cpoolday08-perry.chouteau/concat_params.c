/*
** EPITECH PROJECT, 2020
** concat params
** File description:
** function turns the command-line given arguments into a single string
*/

#include <stdlib.h>
#include <stdio.h>

char my_putchar(char c);

char *my_putstr(char *str)
{
    int i;
    for(i = 0; str[i] != '\0'; i += 1)
        my_putchar(str[i]);
    return 0;
}

int sum_argv_len(int argc,char **argv)
{
    int i;
    int j;
    int size;
    for(i = 0; i < argc; i += 1) {
        for(j = 0; argv[i][j] != '\0'; j += 1);
        size += j + 1;
    }
    return size;
}

char *concat_params(int argc , char **argv)
{
    char *str;
    int i;
    int n;
    int str_0toX = 0;
    int size;
    
    size = sum_argv_len(argc, argv);
    str = malloc(sizeof(char) * (size + 1));
    
    for(i = 0;i < argc; i += 1) {
        for(n = 0; argv[i][n] != '\0'; n += 1, str_0toX += 1)
            str[str_0toX] = argv[i][n];     
        str[str_0toX] = '\n';
        if(str_0toX != size - 1)
            str_0toX += 1;
    }
    str[str_0toX] = '\0';
    
    return str;
}

int main(int ac, char **av)
{
    my_putstr(concat_params(ac, av));
    return 0;
}
