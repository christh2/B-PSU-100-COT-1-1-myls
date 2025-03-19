/*
** EPITECH PROJECT, 2022
** float
** File description:
** float
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);
int my_put_nbr(int nb);

void my_put_nbr_float(double f)
{
    int i = 0;
    int n = 6;
    int j = f;
    int x = my_put_nbr(f);
    my_putchar('.');
    for (; i < n; i++) {
        x = x * 10;
        j = j * 10;
    }
    if (j < x) {
        j = x - j;
        my_put_nbr(j);
    }
    if (j > x) {
        f = j - x;
        my_put_nbr(f);
    }
}
