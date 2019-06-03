/*
** EPITECH PROJECT, 2018
** push_swap
** File description:
** is_number
*/

#include "my.h"

int is_number(char c)
{
    if ( c >= 48 && c <= 57)
        return (1);
    return (0);
}
