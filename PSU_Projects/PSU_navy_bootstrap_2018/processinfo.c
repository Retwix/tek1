/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** main.c
*/

#include <unistd.h>
#include <sys/types.h> 
#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_put_nbr(int nb)
{
    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0) {
        nb = nb * -1;
        write(1, "-", 1);
            if (nb < 9)
                my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}

int main(int argc, char argv)
{
    int fils = 0;
    int popo = 0;
    int group = 0;
    pid_t pid;

    fils = getpid();
    popo = getppid();
    printf("group=%d\n", getpgid(fils)) ;
    printf("fils=%d\n", fils);
    printf("popo=%d\n", popo);
    return (0);
}