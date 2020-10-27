/*
** EPITECH PROJECT, 2018
** my_print_comb
** File description:
** task05
*/

/*#include<unistd.h>

void    my_putchar(char c)
{
    write (1, &c, 1);
    }*/


int    thirdloop(int first_nb, int second_nb, int third_nb)
{
     while ( third_nb <= '9' ) {
	 my_putchar(first_nb);
	 my_putchar(second_nb);
         my_putchar(third_nb);
         if (( first_nb == '7' ) && ( second_nb == '8' ) && ( third_nb == '9' )) {
	     my_putchar('\n');
	     return(0);
         }
	 my_putchar(',');
	 my_putchar(' ');
	 third_nb = third_nb + 1;
      }
     return (0);
}

int    my_print_comb(void)
{
    int first_nb;
    int second_nb;
    int third_nb;

    first_nb = 48;
    while ( first_nb <= '7' ) {
	second_nb = first_nb + 1;
        while ( second_nb <= '8' ) {
	    third_nb = second_nb + 1;
            thirdloop(first_nb, second_nb, third_nb);
	    second_nb = second_nb + 1;
	}
	first_nb = first_nb + 1;	     
    }
    return (0);
}


/*int    main(void)
{
    my_print_comb ();
    return (0);
    }*/


