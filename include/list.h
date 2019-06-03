/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** header list
*/

#ifndef LIST_H
#define LIST_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct list
{
    void *data;
    struct list *prev;
    struct list *next;
} list_t;

int complete_linked_list(list_t **tab, int size, char **av);

//init chained list
int handle_add_element(list_t **tab);
int add_element(list_t **tab);
int add_first_element(list_t **tab);

int return_size_list(list_t **tab);

//find node address by identifying with an id
list_t *return_address(list_t **list, int id);

//swap two element in the same list
void swap_first_element(list_t **tab);
void swap_elements(list_t *element, list_t *element2, list_t **list);

//insert element to another list
void insert_element(list_t **tab, list_t **tab2);

//rotate
int first_become_last(list_t **tab);
int last_become_first(list_t **tab);
int return_size_list(list_t **tab);

//destroy list
int remove_element(list_t **tab);
void remove_whole_list(list_t **tab);

//display
void display_list(list_t **tab);
void display_reverse(list_t **tab, int bool);

//algo
void sorting_list(list_t **tab, list_t **tab2, int size);

#endif /* LIST_H */
