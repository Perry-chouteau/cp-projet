/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int n = 0;
    int nb = 0;

    while (str[i] < '0' || str[i] > '9') {
        if (str[i] == '-') {
            n += 1;
        }
        i += 1;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10 + (str[i] - 48);
        i += 1;
    }
    if (n % 2 == 1) {
        nb = nb * (-1);
    }
    return (nb);
}
