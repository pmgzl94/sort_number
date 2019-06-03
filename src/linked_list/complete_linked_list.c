/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** complete_chained list
*/

#include "my.h"
#include "list.h"

int return_size(char **av)
{
    int i = 1;

    while (av[i] != NULL)
        i++;
    return (i);
}

int complete_linked_list(list_t **list, int size, char **av)
{
    int i = size - 1;

    while (i > 0) {
        handle_add_element(list);
        (*list)->data = malloc(sizeof(int *));
        if ((*list)->data == NULL)
            return (84);
        (*(int *) ((*list)->data)) = my_getnbr(av[i]);
        i--;
    }
    return (0);
}
