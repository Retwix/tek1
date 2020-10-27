/*
** EPITECH PROJECT, 2018
** my_print_digits
** File description:
** task03
*/

/*#include<unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}*/

int my_print_digits(void)
{
    char i;

    i = 48;
    while (i <= 57) {
	my_putchar(i);
        i = i + 1;
    }
    return(0);
}

/*int main(void);
{
    my_print_digits ();
    return (0);
}*/
