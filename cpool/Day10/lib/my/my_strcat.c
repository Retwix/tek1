/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** task02
*/
char *my_strcat(char *dest, char const *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(dest[i] != '\0') {
	i = i + 1;
    }
    while(src[j] != '\0') {
	dest[i] = src[j];
	j = j + 1;
	i = i + 1;
    }
    dest[i] = '\0';
    return(dest);    
}
