/*
** EPITECH PROJECT, 2018
** part2 : number
** File description:
** bootstrap
*/

#include "header.h"

int number(char *str)
{
	int i = 0;
	int result = 0;
	int neg = 0;
	
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32) { 
		i++;
	}
	if (str[i] == '-') {
		neg = 1;
		i++;
	}
	if (str[i] == '+') {
		i++;
	}
	while (str[i] >= '0'  && str[i] <= '9') {
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (neg == 1) {
		result = - result;
	}

	my_put_nbr(result);
	return(0);

	
}
int main(char ac, char **av)
{
	number(av[1]);
	return(0);
}
