/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bspushswap-perry.chouteau
** File description:
** bpushswap.c
*/

#include "../includes/bs_push_swap.h"

int *cxxtoarr(int ac, char **av)
{
    int *nb_arr = malloc(sizeof(int) * ac);
    for (int i = 1; i < ac; i += 1)
        nb_arr[i - 1] = my_getnbr(av[i]);
    return nb_arr;
}

int *swap_1l_2p(int *nb, int p1, int p2)
{
    int x = nb[p1];

    nb[p1] = nb[p2];
    nb[p2] = x;
    return nb;
}

int *swap_all(int *nbr, int ac)
{
    int f = 0;
    for (int b = 1; b != 0;) {
        b = 0;
        for (int i = 0; i < ac; i += 1) {
            int p1 = i;
            int p2 = i + 1;
            f += 1;
            if (nbr[p1] > nbr[p2]) {
                b = 1;
                nbr = swap_1l_2p(nbr, p1, p2);
            }
        }
    }
    return nbr;
}

int main(int ac, char **av)
{
    int *nbr = cxxtoarr(ac, av);
    ac -= 2;
    nbr = swap_all(nbr, ac);
    for (int i = 0; i < (ac + 1); i += 1)
        my_printf("%i\n", nbr[i]);
    return 0;
}