/*
** EPITECH PROJECT, 2018
** swap_elem
** File description:
** function that swaps two numbers in an array
*/

#include <unistd.h>

void swap_elem(int *array, int index1, int index2)
{
    int buff = 0;

    buff = array[index1];
    array[index1] = array[index2];
    array[index2] = buff;
}