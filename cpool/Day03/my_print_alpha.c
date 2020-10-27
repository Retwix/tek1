/*
** EPITECH PROJECT, 2018
** my_print_alpha
** File description:
** task01
*/

/*#include<unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
    }*/



int my_print_alpha(void)
{
    char i;

    i = 97;
    while (i <= 122)
    {
        my_putchar (i);
        i = i + 1;
    }
    return (0);
}

/*int main(void)
**{
**    my_print_alpha();
**    return (0);
}*/
