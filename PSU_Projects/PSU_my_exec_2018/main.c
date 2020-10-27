/*
** EPITECH PROJECT, 2019
** my_exec
** File description:
** main.c
*/
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(long int nb)
{
    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0) {
        nb = nb * -1;
        write(1, "-", 1);
            if (nb < -9)
                my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}

void my_putstr(char *str)
{
    int i = 0;
    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
}

long my_pid()
{
    pid_t cpid;
    long i = 0;

    cpid = fork();
    if (cpid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    if (cpid == 0) {
        return (getpid());
    }
}

void my_display(char **argv)
{
    my_putstr("Program name: ");
    my_putchar('\n');
    my_putstr("Nb args: ");
    my_putchar('\n');
    my_putstr("PID: ");
    my_pid();
    my_putchar('\n');
    my_putstr("Child PID: ");
    my_putchar('\n');
    my_putstr("Program terminated.\n");
    my_putstr("Status: ");
    my_putchar('\n');
}


int main(int argc, char **argv)
{
    my_display(argv)    ;
    return (0);
}