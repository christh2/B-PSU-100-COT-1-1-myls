/*
** EPITECH PROJECT, 2022
** octal.c
** File description:
** octal
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);
int my_put_nbr(int nb);

int convert_octal(unsigned int n)
{
    int count = 0;
    int i;
    int tab[100];
    for (i = 0; n > 0; i++) {
        tab[i] = n % 8;
        n = n / 8;
    }
    for (i = i - 1; i >= 0; i--) {
        my_put_nbr(tab[i]);
    }
    return count;
}
