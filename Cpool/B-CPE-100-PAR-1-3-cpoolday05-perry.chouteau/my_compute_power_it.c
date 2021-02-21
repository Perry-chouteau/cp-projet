/*
** EPITECH PROJECT, 2020
** my compute power it
** File description:
** return the value of a power
*/

int my_compute_power_it (int nb, int p)
{
    int nb_temp=nb;
    if(p == 0)
        nb = 1;
    if(p < 0)
        nb=0;
    while(p > 1) {
        p -= 1;
        nb *= nb_temp;
    }
    return(nb);
}
