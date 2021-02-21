/*
** EPITECH PROJECT, 2020
** Solo_Stumper
** File description:
** ss1.c
*/

#include <unistd.h>

void cond1(char **av, int i)
{
    switch (av[1][i]) {
        case 'o': write(1, "0", 1);
            break;
        case 'i': write(1, "1", 1);
            break;
        case 'u': write(1, "2", 1);
            break;
        case 'e': write(1, "3", 1);
            break;
        case 'a': write(1, "4", 1);
            break;
        case 'y': write(1, "5", 1);
            break;
    }
}

void cond2(char **av, int i)
{
    switch (av[1][i]) {
        case 'O': write(1, "0", 1);
            break;
        case 'I': write(1, "1", 1);
            break;
        case 'U': write(1, "2", 1);
            break;
        case 'E': write(1, "3", 1);
            break;
        case 'A': write(1, "4", 1);
            break;
        case 'Y': write(1, "5", 1);
            break;
    }
}

int cond3(char **av, int i, int s)
{
    char c = av[1][i];

    if (av[1][i] == ' ')
        s += 1;
    if ((i + s) % 2 == 0)
        if (av[1][i] >= 'a' && av[1][i] <= 'z')
            c -= 32;
    else
        if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            c += 32;
    write(1, &c, 1);
    return s;
}

int main(int ac, char **av)
{
    int i = 0;
    int s = 0;

    for (int i = 0; av[1][i] != '\0'; i += 1) {
        cond1(av, i);
        cond2(av, i);
        if (av[1][i] == 'o' || av[1][i] == 'i' || av[1][i] == 'u' ||
        av[1][i] == 'e' || av[1][i] == 'a' || av[1][i] == 'y' ||
        av[1][i] == 'O' || av[1][i] == 'I' || av[1][i] == 'U' ||
        av[1][i] == 'E' || av[1][i] == 'A' || av[1][i] == 'Y')
            continue;
        s = cond3(av, i, s);
    }
    write(1, "\n", 1);
}