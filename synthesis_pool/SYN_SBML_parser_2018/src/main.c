/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** SBML
*/

#include "my.h"

char **deleting_tabs(char **tab, char c)
{
    for (int i = 0; tab[i]; i++) {
        for (int j = 0; tab[i][j] == ' ' || tab[i][j] == '\t';) {
            for (; tab[i][j + 1] != '\0'; j++)
                tab[i][j] = tab[i][j + 1];
            tab[i][j] = '\0';
            j = 0;
        }
    }
    return (tab);
}

void parsing_values(char **tab)
{
    int i = 0;
    int j = 0;

    for (int i = 0; tab[i]; i++) {
        if (tab[i][1] != '?' && tab[i][1] != '/') {
            for (int j = 0; tab[i][j] != ' ')
                // printf("%s\n", tab[i]);
        }
    }
}

char **fill_str(int size, int fd, char const *filepath)
{
    char *str = NULL;
    char buffer[1];
    int i = 0;
    char **tab = NULL;

    str = malloc(sizeof(char) * size + 1);
    while (read(fd, buffer, 1) > 0) {
        str[i] = buffer[0];
        i++;
    }
    str[i] = '\0';
    tab = parser(str, '\n');
    return (tab);
}

int my_open(char const *filepath)
{
    int fd = 0;
    struct stat st;
    size_t i = 0;
    char **tab = NULL;

    if (fd = open(filepath, O_RDONLY) == -1)
        return (84);
    fd = open(filepath, O_RDONLY);
    stat(filepath, &st);
    tab = fill_str(st.st_size, fd, filepath);
    tab = deleting_tabs(tab, ' ');
    parsing_values(tab);
}

int main(int ac, char **av)
{
    char const *filepath = NULL;
    if (ac < 2)
        puts("Error: missing arguments.");
    else if (strcmp(av[1], "-h") == 0)
        disp_help();
    filepath = av[1];
    my_open(filepath);
    return (0);
}