/*
** EPITECH PROJECT, 2018
** my_isneg
** File description:
** task04
*/

#include<unistd.h>

void my_putchar(char c);

int my_isneg(int nb)
{
    if (nb < 0) {
	my_putchar ('N');
	    
    }
    else {
	my_putchar ('P');
    }
    return (0);
}

/*int main(void)
{
    my_isneg (-65);
    return (0);
    }*/
