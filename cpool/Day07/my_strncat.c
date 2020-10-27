/*
** EPITECH PROJECT, 2018
** my_strncat
** File description:
** task03
*/
char *my_strncat(char *dest, char const *src, int nb)
{
    int i;
    int c;

    i = 0;
    c = 0;
    while (dest[i] != '\0') {
        i = i + 1;
    }
    while (src[c] != '\0' && c != nb) {
        dest[i] = src[c];
        i = i + 1;
        c = c + 1;
    }
    dest[i] = '\0';
    return (dest);
}
