/*
** EPITECH PROJECT, 2018
** my_push_swap
** File description:
** main file
*/

#include "my.h"
#include "list.h"

int check_list(list_t *list, int size)
{
    int i = 0;
    int value = *(int *) list->data;

    while (i < size - 1) {
        if (value > *(int *) (list->data))
            return (0);
        else {
            value = *(int *) list->data;
            list = list->next;
        }
        i++;
    }
    exit(0);
}

int main(int ac, char **av)
{
    int size = return_size(av);
    list_t *first_list = NULL;
    list_t *snd_list = NULL;
    int i = 0;

    check_error(av, size);
    if (complete_linked_list(&first_list, size, av) == 84)
        return (84);
    check_list(first_list, size);
    sorting_list(&first_list, &snd_list, size);
    display_list(&first_list);
    remove_whole_list(&first_list);
    return (0);
}
