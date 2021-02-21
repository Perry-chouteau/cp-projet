/*
** EPITECH PROJECT, 2020
** Solo_Stumper
** File description:
** ss1.c
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int str_isnum(char const *str)
{
    int	i = 0;

    while (str[i])
    {
        if ((str[i] >= '0' && str[i] <= '9') || \
        str[i] == '-' || str[i] == '.' || str[i] == '.')
            i += 1;
        else
            return (0);
    }
    if (str[0] == '\0')
        return 0;
    return 1;
}

int my_error(int ac, char **av)
{
    if (ac != 3)
        return 84;
    if (str_isnum(av[1]) == 0 || str_isnum(av[2]) == 0)
        return 84;
    if (atoi(av[1]) > atoi(av[2]))
        return 84;
    return 0;
}

void checkcond(int i)
{
    if (i % 2 == 0) {
        printf("Fozz");
        if (i % 9 == 0)
            printf("Bazz");
    }
    else if (i % 9 == 0)
        printf("Bazz");
    else
        printf("%i", i);
    printf("\n");
}

int main(int ac, char **av)
{
    if (my_error(ac, av) == 84)
        return 84;
    for (int i = atoi(av[1]) ; i <= atoi(av[2]) ; i += 1)
        checkcond(i);
}