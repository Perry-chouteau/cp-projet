

char **split_string(char const *str)
{
    int sz = 1;
    for(int i; str[i]; i += 1)
        if (str[i] < 'a' || str[i] > 'z' && \
        str[i] < 'A' || str[i] > 'Z' && \
        str[i] < '0' || str[i] > '9')
            sz += 1;
    char **str = malloc(sizeof(char *) * sz);
    for (int j; j < sz ; j += 1) {
        int i;
        for (i = 0;; str[i];str[i] < 'a' || str[i] > 'z' && \
            str[i] < 'A' || str[i] > 'Z' && \
            str[i] < '0' || str[i] > '9'; i += 1);
        str[j] = malloc((sizeof(char) * i);
    }

    for (int i = 0; i < sz; i += 1)
        for (int j = 0; str[j] < 'a' || str[j] > 'z' && \
        str[j] < 'A' || str[j] > 'Z' && \
        str[j] < '0' || str[j] > '9'; j += 1)
            str[i] = str[j];
}

int main(void)
{
    char *str = "bon jour";
    char **tab = split_string(str);
    for (i tab[i][0] != '\0'; i += 1)
}