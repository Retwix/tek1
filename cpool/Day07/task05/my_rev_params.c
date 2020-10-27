/*
** EPITECH PROJECT, 2018
** my_rev_params
** File description:
** task05
*/

#include <unistd.h>
void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}
int main(int argc, char **argv)
{
    int i;

    i = argc - 1;
    while (i >= 0) {
        my_putstr(argv[i]);
        i = i - 1;
        my_putchar('\n');
    }
    return (0);
}
