/*
** EPITECH PROJECT, 2018
** shuting-yard algo
** File description:
** convert mathical expression into a reverse polish notation
*/

int operators(int ac, char **av)
{
	char *ope;
	
	if (av[1][i] == '*')
		ope[i] = av[1][i];
	if (av[1][i] == '+')
		ope[i] = av[1][i];
	if (av[1][i] == '-')
		ope[i] = av[1][i];
	if (av[1][i] == '/')
		ope[i] = av[1][i];
	if (av[1][i] == '%')
		ope[i] = av[1][i];
		
}

int shuting_yard(int ac, char **av)
{
	int i = 0;
	char *output;
	
	while (ac[1][i] != 0) {
		if (av[1][i] >= 48 || av[1][i] <= 57) {
			output[i] = my_getnbr(av[1][i]);
			i++;
		}
	}	
}
	
