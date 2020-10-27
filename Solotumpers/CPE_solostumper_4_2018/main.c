/*
** EPITECH PROJECT, 2019
** solostumper_3
** File description:
** main.c
*/

#include <unistd.h>
#include "include/my.h"

char *my_2_letter_long(char *str)
{
    int i = 0;
    int j = 0;

    while (str[j] != '\0') {
        if (str[i] >= 65 && str[i] <= 90 || str[i] == 32) {
            if (str[i] == ' ')
                i++;
            str[i] = str[i] + 32;
            i++;
        }
        else
            i++;
        j++;
    }
    return (str);
}
void my_error(void)
{
    my_putstr("Usage: USNameFormatter string\n");
}

int main(int argc, char **argv)
{
    char *str;
    char *formatter;
    char *ok;

    str = argv[1];
    if (argc == 2) {
        formatter = my_2_letter_long(str);
        if (formatter[2] == ' ') {
            ok = checking_space(formatter);
        }
        else
            ok = my_string(formatter);
        my_putstr(formatter);
    }
    if (argc != 2) {
        my_error();
        return(84);
    }
    return (0);
}