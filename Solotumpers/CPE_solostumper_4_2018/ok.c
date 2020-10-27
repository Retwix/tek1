/*
** EPITECH PROJECT, 2019
** solostumper4
** File description:
** 
*/
#include <unistd.h>
#include "include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
}

char *checking_space(char *str)
{
    int i = 0;
    int j = 0;

    
    while (str[i] != ' ') {
        if (i == 1) {
            while (j != 2) {
                str[j] = str[j] - 32;
                j++;
            }
        }
        i++;
    }
    return (str);
}
char *my_string(char *formatter)
{
    int i = 0;
    int j = 0;

    formatter[0] = formatter[0] - 32;
    while (formatter[i]) {
        if (formatter[i - 1] == ' ') {
            formatter[i] = formatter[i] - 32;
            formatter[i] = formatter[i] - 32;
        }
        i++;
    }
}