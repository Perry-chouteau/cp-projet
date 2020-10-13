/*
** EPITECH PROJECT, 2020
** get nbr
** File description:
** get number
*/
#include <stdio.h>

int i_getnbr(char const *str, int i, int nb_str)
{
    if(str[i] >= '0' && str[i] <= '9') {
        printf("if %d\n",nb_str);
        nb_str += str[i] - '0';
        printf("+= %d\n",nb_str);
        nb_str *= 10;
        printf("*=%d\n",nb_str);
    }
    else
    {
        printf("fin %d\n",nb_str);
        nb_str /= 10;
        printf("/= %d\n",nb_str);
    }
    return nb_str;
}

int my_getnbr(char const *str)
{
    int i = 0;
    int nb_chiffre = 1;
    int nb_signe = 1;
    int nb_str = 0;

    for(;str[i] == '-' || str[i] == '+'; i += 1)
        if(str[i] == '-')
            nb_signe *= -1;
    
    for(;str[i] != '\0'; i += 1) {
        i_getnbr(str, i, nb_str);
        printf ("nb_str: %d\n", nb_str);
    }
    return nb_str;
}
int main()
{
    char *str= "1111";
    my_getnbr(str);
}
 
