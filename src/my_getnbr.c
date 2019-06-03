/*
** EPITECH PROJECT, 2018
** task05 Day04
** File description:
** my_getnbr
*/

#include "my.h"

int count_minus(int i2, char *str)
{
    int i = 0;
    int count = 0;

    while ( i < i2 ) {
        if (str[i] == 45)
            count++;
        i++;
    }
    if (count % 2 == 0)
        return 1;
    else
        return (-1);
}

int multiple2(int i2, int i3, char *str)
{
    int i = 0;
    int nb = 1;

    for (i2; i2 < i3; i2++)
        i++;
    for (int i2 = 0; i2 < i - 1; i2++)
        nb = nb * 10;
    return nb;
}

int create_nb(char *str, int i2, int i3)
{
    int nb = 0;
    int mult = multiple2(i2, i3, str);
    int marker = i2;

    for (i2; i2 <= i3; i2++) {
        nb = nb + (str[i2] - '0') * mult;
        mult = mult / 10;
    }
    if (count_minus(marker, str) == (-1))
        nb *= -1;
    return (nb);
}

int my_getnbr(char *str)
{
    int nb = 0;
    int i = 0;
    int i2, i3;

    while (str[i] != 0 && !(str[i] >= 48 && str[i] <= 57))
        i++;
    i2 = i;
    while (str[i] != 0 && str[i] >= 48 && str[i] <= 57)
        i++;
    i3 = i;
    if (str[i2] == 0)
        return (-7);
    nb = create_nb(str, i2, i3);
    return (nb);
}
