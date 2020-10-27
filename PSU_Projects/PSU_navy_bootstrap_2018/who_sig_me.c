/*
** EPITECH PROJECT, 2018
** nave_boostrap
** File description:
** main.c
*/

#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 

void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_putstr(char *str)
{
	int i = 0;

	while (str[i]) {
		my_putchar(str[i]);
		i++;
	}
}

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

char *who_sig_me2(int s_signal)
{
	char *str;

	str = strsignal(s_signal);
	my_putstr(str);
	my_putchar('\n');
	return (str);
}

char *who_sig_me(int f_signal)
{
	char *str;

	str = strsignal(f_signal);
	my_putstr(str);
	my_putchar('\n');
	return (str);
}

int main(int argc, char **argv)
{
	int f_signal = 0;
	int s_signal = 0;

	f_signal = my_get_nbr(argv[1]);
	s_signal = my_get_nbr(argv[2]);
	who_sig_me(f_signal);
	who_sig_me2(s_signal);
	while (1) {
		
	}
	return (0);
}