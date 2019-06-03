/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** radix
*/

#include "list.h"

static void back_up_data(list_t **tab, list_t **tab2, int counter)
{
    int i = 0;

    if (counter == 0)
        return;
    while (i < counter) {
        last_become_first(tab2);
        insert_element(tab2, tab);
        first_become_last(tab);
        i++;
    }
}

static void compare_bit(list_t **tab, list_t **tab2, int i, int size)
{
    int i2 = 1;
    int counter = 0;
    int type = 0;

    while (i2 < size) {
        type = (*(int *)(*tab)->data) >> i & 1 ? 1 : 0;
        if (type == 1) {
            counter++;
            insert_element(tab, tab2);
        } else if (type == 0) {
            first_become_last(tab);
        }
        i2++;
    }
    back_up_data(tab, tab2, counter);
}

static void back_up_data2(list_t **tab, list_t **tab2, int counter)
{
    int value = 0;
    int i = 0;

    if (counter == 0) {
        return;
    }
    while (i < counter) {
        insert_element(tab2, tab);
        i++;
    }
}

static void handle_negativ_nb(list_t **tab, list_t **tab2, int size)
{
    int i2 = 0;
    int type = 0;
    int counter = 0;

    while (i2 < size - 1) {
        type = (*(int *) (*tab)->data) >> 31 & 1 ? 1 : 0;
        if (type == 1) {
            counter++;
            insert_element(tab, tab2);
        } else if (type == 0) {
            first_become_last(tab);
        }
        i2++;
    }
    back_up_data2(tab, tab2, counter);
}

void sorting_list(list_t **tab, list_t **tab2, int size)
{
    int i = 0;
    int c = 127;

    while (i < 31) {
        compare_bit(tab, tab2, i, size);
        i++;
    }
    handle_negativ_nb(tab, tab2, size);
}