/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** 
*/

int my_getnbr(char const *str)
{
    int i = 0;

    if (str[i] > 48 && str[i] < 57) {
        my_putchar(str[i]);
        i++;
	}
    if (str[i] >= 9 && str[i] <= 13 || str[i] == 32) {
        my_putchar(str[i]);
        i++;
    }
    else {
	return(0);
    }
    my_putchar();
}

int main()
{
    my_getnbr(618);
    return(0);
}
