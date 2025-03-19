/*
** EPITECH PROJECT, 2022
** convert_hexa_maj
** File description:
** convert_hexa_maj.c
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);
int my_put_nbr(int nb);

int convert_hexa_maj(unsigned int n)
{
    char tab[50];
    int i;
    int stock;
    for (i = 0; n != 0; i++) {
        stock = n % 16;
        if (stock < 10)
            stock = stock + 48;
        else
            stock = stock + 55;
        n = n / 16;
        tab[i] = stock;
    }
    for (i = i - 1; i >= 0; i--) {
        my_putchar(tab[i]);
    }
    return (0);
}
