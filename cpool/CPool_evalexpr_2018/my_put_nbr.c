/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** task07
*/
void my_putchar(char c);

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
