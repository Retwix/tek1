char **deleting_tabs(char **tab, char c)
{
    char **bat = NULL;
    int i = 0;
    int k = 0;
    int j = 0;

    bat = my_malloc(tab, bat);
    for (int i = 0; tab[i]; i++) {
        for (int j = 0; tab[i][j] != '<';) {
            for (; tab[i][j] == c; j++);
            bat[i][k] = tab[i][j];
            k++;
            j++;
        }
        j = 0;
        k = 0;
    }
    bat[i][k] = '\0';
    for (int o = 0; bat[o]; o++)
        printf("%s\n", bat[o]);
    return (bat);
}