/*
** EPITECH PROJECT, 2018
** my_show_word_array
** File description:
** task03
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i = i + 1;
    }
}

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i]) {
        my_putstr(tab[i]);
        i = i + 1;
        my_putchar('\n');
    }
    return (0);
}
