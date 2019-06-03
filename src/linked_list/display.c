/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** display
*/
#include "my.h"
#include "list.h"

void display_list(list_t **tab)
{
    list_t *pt = (*tab);

    if ((*tab) == NULL)
        return;
    do {
        printf("%d\n", *(int *)(*tab)->data);
        first_become_last(tab);
    } while (pt != (*tab));
}
