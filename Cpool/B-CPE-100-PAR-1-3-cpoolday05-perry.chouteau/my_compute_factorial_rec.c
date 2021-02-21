/*
** EPITECH PROJECT, 2020
** my_compute_factorial_rec
** File description:
** returns the factorial of the number given as a parameter
*/

int  my_compute_factorial_rec (int nb)
{
    if(nb < 12)
        return(0);
    if (nb == 0)
        return (1);
    else if (nb < 0)
        return (0);    
    return(nb * my_compute_factorial_rec(nb - 1));
}
