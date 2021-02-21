/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd02-perry.chouteau
** File description:
** is_premium_number.c
*/

int is_premium_number(int nb)
{
    int i;
    int j;
    if ( nb == 0 || nb == 1)
        return 0;
    for (i = 2; i < 46341; i += 1)
        if (nb == (i * i))
            return 1;
    return 0;
}