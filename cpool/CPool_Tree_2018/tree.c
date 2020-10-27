/*
** EPITECH PROJECT, 2018
** tree
** File description:
** projectw1
*/
#include<unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void tree(int size);
