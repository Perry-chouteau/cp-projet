/*
** EPITECH PROJECT, 2020
** my compute power rec
** File description:
** return the result of a power
*/

int my_compute_power_rec(int nb,int p)
{
    if(p>1)
        return(nb * my_compute_power_rec(nb, p -= 1));
}
