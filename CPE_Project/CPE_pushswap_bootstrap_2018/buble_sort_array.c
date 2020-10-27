/*
** EPITECH PROJECT, 2018
** swap_elem
** File description:
** function that swaps two numbers in an array
*/
#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}
int my_put_nbr(int nb)
{
    int i;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            i = (nb % 10);
            nb = (nb - i) / 10;
            my_putchar(nb);
            my_putchar(48 + i);
        }
        else
            my_putchar(48 + nb % 10);
    }
}

void bubble_sort_array(int *array, int size)
{
	int i = 0;
	int buffer = 0;

	while (i <= size) {
		buffer = array[size];
		array[size] = array[i];
		array[i] = buffer;
		i++;
		size--;
	}
}

int main()
{
    int i = 0;

    int test[5] = {1, 2, 3, 4, 5};
    int size = 5;
    bubble_sort_array(test, 4);
    while (i < size) {
        my_put_nbr(test[i]);
        i++;
    }
    return 0;
}