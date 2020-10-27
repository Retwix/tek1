/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** main.c
*/

#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main(int argc, char **argv)
{
    DIR *dir;
    struct dirent *dent;
    dir = opendir(argv[1]);

    if (argc < 2)
        write(2, "Error", 5);
    if (dir == NULL)
        write(2, "Error", 5);
    while ((dent = readdir(dir)) != NULL) {
        if (dent->d_name[0] != '.') { 
        printf("Name:  %s\n", dent->d_name);
        printf("Type:  %c\n", dent->d_type);
        }
    }
    return (0);
}