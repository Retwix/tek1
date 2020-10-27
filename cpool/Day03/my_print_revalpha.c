/*
** EPITECH PROJECT, 2018
** my_print_revalpha
** File description:
** task02
*/

/*#include<unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
    }*/

int my_print_revalpha(void)
{
    char i;
    
    i = 122;
    while (i >= 97) {
	my_putchar (i);
	i = i - 1;
    }
    return(0);	
}

/*int main(void)
{
    my_print_revalpha ();
    return (0);
    }*/
