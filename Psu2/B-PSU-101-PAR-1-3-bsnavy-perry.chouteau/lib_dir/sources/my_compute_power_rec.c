/*
** EPITECH PROJECT, 2020
** my compute power rec
** File description:
** compute power rec
*/

int my_compute_power_rec(int nb, int power)
{
    if (power == 1)
        return nb;
    if (power > 0) {
        nb *= my_compute_power_rec(nb, (power - 1));
        return nb;
    }
    if (power == 0)
        return 1;
    if (power < 0)
        return 0;
}
