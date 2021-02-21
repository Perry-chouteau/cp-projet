/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** function that reverse a string into a array
*/

void my_swap(char a,char b);

char *my_revstr(char *str)
{
    int i = 0;
    int n=0;
    char a = 0;
    char b = 0;
    
    while(str[i] != '\0')
        i += 1;
    i -= 1;
    for( n = 0; n < i ; n += 1, i -= 1) { 
        a = str[n];
        b = str[i];
        my_swap(a,b);
        str[n]=a;
        str[i]=b;
    }
    return str;
}
