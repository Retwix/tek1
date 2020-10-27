/*
** EPITECH PROJECT, 2018
** my_srtncpy
** File description:
** task02 Day06
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    i = 0;
    while(i < n) {
        if (src[i] != '\0') {
            dest[i] = src[i];
	}
        if (src[i] == '\0') {
            dest[i] = '\0';
	}
	i = i + 1;
    }
    return(dest);
   
}
