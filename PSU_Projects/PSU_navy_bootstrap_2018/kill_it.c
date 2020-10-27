/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** main.c
*/

#include <stdio.h>
#include <signal.h>

int my_get_nbr(char *str)
{
    int res = 0;
    int i = 0;

    while (str[i]) {
        if (str[i] <= '9' && str[i] >= '0') {
            res = res * 10 + (str[i] - 48);
        }
        i++;
    }
    return (res);
}

int main(int argc, char **argv)
{
	int pid = 0;

	pid = my_get_nbr(argv[1]);
	kill(pid, 3);
	return (0);
}