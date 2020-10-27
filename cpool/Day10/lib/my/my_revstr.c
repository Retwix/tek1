/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** task03 Day06
*/
char my_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
	i = i + 1;
    }
    i = i - 1;
    return(i);
}

char *my_revstr(char *str)
{
    int i;
    int lenght;
    int tempo;

    i = 0;
    lenght = my_strlen(str);
    while (i < lenght) {
	tempo = str[i];
	str[i] = str[lenght];
	str[lenght]= tempo;
	lenght = lenght - 1;
	i = i + 1;
    }
    return(str);
}
