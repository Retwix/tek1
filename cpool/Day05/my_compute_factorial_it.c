/*
** EPITECH PROJECT, 2018
** my_compute_factorial_it
** File description:
** task01
*/
int my_compute_factorial_it(int nb)
{
    int i;

    i = nb;
    if (nb == 0) {
	return (1);
    }
    if (nb < 0 || nb > 12) {
	return (0);
    }
    while(i > 1) {
        nb = nb * (i - 1);
        i = i - 1;
    }
    return (nb);
}
