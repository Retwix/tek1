/*
** EPITECH PROJECT, 2018
** my_compute_power_it
** File description:
** task03
*/
int my_compute_power_it(int nb, int p)
{
    int i;

    i = nb;
    if(p == 0) {
      return (1);
    }
    if (p < 0) {
	return (0);
    }
    while(1 < p) {
	nb = nb * i;
	p = p - 1;
    }
    return (nb);
}
