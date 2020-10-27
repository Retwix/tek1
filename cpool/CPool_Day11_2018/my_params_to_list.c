/*
** EPITECH PROJECT, 2018
** my_params_to_list
** File description:
** task01
*/
#include "mylist.h"

linked_list_t *my_params_to_list(int ac char * const *av)
{
    struct linked_list *element;
    struct linked_list *list = NULL;
    int i = 0;

    while (i != ac) {
    element = malloc(sizeof(*element));
    element->data = av[i];
    element->next = list;
    list = element;
    i = i + 1;
    }
    return (list);
}
