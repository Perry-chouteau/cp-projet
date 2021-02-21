/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd02-perry.chouteau
** File description:
** is_prime_number.c
*/

int is_prime_number(int nb)
{
    int i;
    int j;

    if (nb <= 0)
        return 0;
    if (nb == 1)
        return 0;
    if (nb == 2)
        return 1;
    if (nb == 3)
        return 1;
    for (i = 2; i <= nb; i += 1)
        for (j = 2;  j <= nb; j += 1) {
            if (nb == (i * j))
                return 0;
        }
    return 1;
}
