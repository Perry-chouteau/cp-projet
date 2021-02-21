/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** function that copies n charactere of a string into another                  
*/

char *my_strncpy(char *dest, char  const *src,int n)
{
    int i;
    for(i = 0; i <= n; i += 1) {
        dest[i] = src[i];
    }
    dest[i-1] = '\0';
    return dest;
}
