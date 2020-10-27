/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** task01
*/
#include <stdlib.h>
#include <unistd.h>
int my_len(char const *str)
{
    int b;

    b = 0;
    while (str[b] != '\0') {
        b = b + 1;
    }
    return (b);
}
char *my_strdup(char const *src)
{
    char *dest;
    int i;

    i = 0;
    dest = malloc(sizeof(char) * (my_len(src) + 1));
    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
