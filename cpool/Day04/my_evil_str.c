/*
** EPITECH PROJECT, 2018
** my_evil_str
** File description:
** task04
*/

char *my_evil_str(char *str)
{
    int i;
    int lenght;
    char tempo;
	
    i = 0;
    lenght = my_strlen(str);
    i = i - 1;
    while( i < lenght ) {
	tempo = str[i];
	str[i] = str[lenght];
	str[lenght] = tempo;
	lenght = lenght - 1;
	i = i + 1;
    }
    return (str);
}
