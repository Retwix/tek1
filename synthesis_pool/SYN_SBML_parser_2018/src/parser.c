/*
** EPITECH PROJECT, 2019
** parser.c
** File description:
** n4s
*/

#include "my.h"

char *get_str(char *str, int begin, int end)
{
    char *result = malloc(sizeof(char) * (end - begin) + 10);

    for (int c = 0; begin < end; begin++, c++)
        result[c] = str[begin];
    return (result);
}

char **parser(char *str, char c)
{
    char **result;
    int count = 0;
    int index = 0;
    int tmp;
    char tmp_c = c;

    for (int i = 0; str[i] != '\0'; i++)
        (str[i] == c) ? count++ : 0;
    result = malloc(sizeof(char *) * count + 20);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != c) {
            (str[i] == 39) ? c = 39, i++ : 0;
            tmp = i;
            for (; str[i] != c && str[i] != '\0'; i++);
            result[index++] = get_str(str, tmp, i);
            c = tmp_c;
            i--;
        }
    }
    return (result);
}