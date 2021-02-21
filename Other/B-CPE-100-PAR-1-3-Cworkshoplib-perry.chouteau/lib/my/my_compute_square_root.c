/*
** EPITECH PROJECT, 2020
** my compute square root
** File description:
** compute square root
*/

int my_compute_power_rec(int nb, int power)
{
    int i;

    if (nb < 0)
        return (0);
    for (i = 0; (i * i) != nb; i += 1)
        if ((i * i) > nb)
            return 0;
    return i;
}


