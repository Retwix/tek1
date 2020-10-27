/*
** EPITECH PROJECT, 2018
** my_strcpy
** File description:
** task01 Day06
*/
char *my_strcpy(char *dest, char const *src);

char *my_strcpy(char *dest, char const *src)
{
    int i;

    i = 0;
    dest[i] = src[i];
    while (src[i] != '\0')
    {
        i = i + 1;
        dest[i] = src[i];
    }
}

