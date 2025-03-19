/*
** EPITECH PROJECT, 2022
** unsigned
** File description:
** unsigned.c
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);
int my_put_nbr(int nb);

int my_put_unsigned_nbr(unsigned int nb)
{
    int count = 0;
    if (nb >= 0 && nb <= 9) {
        nb = nb + 48;
        my_putchar(nb);
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return count;
}
