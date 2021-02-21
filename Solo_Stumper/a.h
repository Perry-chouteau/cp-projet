/*
** EPITECH PROJECT, 2020
** Solo_Stumper
** File description:
** a.h
*/

typedef struct
{
    char *str;
}a_t;

void st(a_t *struc)
{
    struc->str = malloc(sizeof(char) * 7);
    struc->str[0] = 'B';
    struc->str[1] = 'o';
    struc->str[2] = 'n';
    struc->str[3] = 'j';
    struc->str[4] = 'o';
    struc->str[5] = 'u';
    struc->str[6] = 'r';
}

int main(int ac, char **av)
{
    a_t *struc;
    struc = malloc(sizeof(a_t));
    st(struc);
    write (1, struc->str, strlen(struc->str));
}