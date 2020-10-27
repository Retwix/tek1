/*
** EPITECH PROJECT, 2018
** requirement.c
** File description:
** SYN
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] !='\0'; i++);
    return (i);
}

char *get_str(char const *str, int begin, int end)
{
    char *result = malloc(sizeof(char) * (end - begin) + 10);

    for (int c = 0; begin < end ; begin++, c++)
        result[c] = str[begin];
    return (result);
}

int my_count_digits(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' &&\
        str[i] <= 'Z' || str[i] >= '0' && str[i] <= '9')
            count++;
    }
    count = my_strlen(str) - count;
    return (count);
}

char **my_str_to_word_array_synthesis(char const *str)
{
    char **tab;
    int tmp = 0;
    int index = 0;

    tab = malloc(sizeof(char*) * my_count_digits(str) + 2);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' &&\
        str[i] >= 'Z' || str[i] >= '0' && str[i] <= '9') {
            tmp = i;
            for (; str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' &&\
            str[i] >= 'Z' || str[i] >= '0' && str[i] <= '9'; i++);
            tab[index++] = get_str(str, tmp, i);
            i--;
        }
        tab[index] = 0;
    }
    return(tab);
}