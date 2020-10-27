/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** eval_expr
*/

int eval_expr(int ac, char **av)
{
	int *nbr;
	while (av[1][i] != '\0') {
		if (av[1][i] >= 48 || av[1][i] <= 57) {
			nbr = nbr * 10 + (av[1][i] - 48);
			i++;
		}
	}
}

int main(int ac, char **av)
{
	if (ac == 2) {
		my_put_nbr(eval_expr(av[1]));
		my_putchar('\n');
		return (0);
	}
	return(84);
}
