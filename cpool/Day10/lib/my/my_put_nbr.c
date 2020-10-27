/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** task07
*/

void my_putchar(char c);

int negativeFilter(int nb)
{
    if ( nb < 0 ) {
	my_putchar('-');
	return (nb * -1);
    }
    return(nb);
}


int my_put_nbr(int nb)
{
    int i;
    int print;
    
    i = 1;
    nb = negativeFilter(nb);
    while(i < nb && i * 10  <= nb) {
	i = i + nb;
    }
    while( nb > 9) {
	print = i / nb;
        nb = nb % i;
	i = i / 10;
	my_putchar(print + '0');
    }
    my_putchar(print + '0');
    return(0);
}
