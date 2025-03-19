/*
** EPITECH PROJECT, 2022
** binary.c
** File description:
** binary.c
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);
int my_put_nbr(int nb);

int convert_base(unsigned int nb)
{
    int i;
    int tab[100];
    for (i = 0; nb > 0; i++) {
        tab[i] = nb % 2;
        nb = nb / 2;
    }
    for (i = i - 1; i >= 0; i--) {
        my_put_nbr(tab[i]);
    }
    return (0);
}
