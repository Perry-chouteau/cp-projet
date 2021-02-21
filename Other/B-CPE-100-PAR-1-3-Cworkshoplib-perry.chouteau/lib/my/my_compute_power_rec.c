/*
** EPITECH PROJECT, 2020
** my compute power rec
** File description:
** compute power rec
*/

int my_compute_power_rec (int nb, int power)
{
    int sv_nb = nb;
    
    if (power < 0)
        return (1);
    nb = (my_compute_power_rec(nb, power - 1) * sv_nb);
    return nb;
}
