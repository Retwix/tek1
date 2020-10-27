/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** task05
*/
int my_compute_square_root(int nb)
{
    int i;

    i = 0;
    while (i < nb) {
	if (i * i == nb) {
            return (i); 
	}
            i  = i + 1;
    }
    return(0);
}
