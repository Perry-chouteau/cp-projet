/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

#include "include/my.h"
#include "rush3.h"


char *rush3_first_conditions(char *buff, char *result)
{
    if (buff[0] == 'o')
        rush1_1(result);
    if (buff[0] == '*' || buff[0] == '/')
        rush1_2(result);
}

char *rush3_last_conditions(char *buff, char *result, int i, int j)
{
    if (buff[0] == 'B') {
        result = rush1_3(result);
        result = rush1_4(result);
        result = rush1_5(result);
    }



int rush3(char *buff)
{
    int i = 0;
    int j = 0;
    char *result = "";

    while (buff[i] != '\0') {
        
    my_putstr(result);
    return(0);
}
