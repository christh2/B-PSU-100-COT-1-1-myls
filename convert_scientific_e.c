/*
** EPITECH PROJECT, 2022
** convert_scientific_min.c
** File description:
** convert_scientific_min
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);
int my_put_nbr(int nb);

void my_put_nbr_float(double f);

void cast3(double f, int i)
{
    my_put_nbr_float(f);
    my_putchar('e');
    my_putchar('+');
    my_putchar ('0');
}

void convert_scientific_e(double f)
{
    int i = 0;
    for (i = 0; f >= 10 || f <= -10; i++) {
        f = f / 10;
    }
    cast3(f, i);
    my_put_nbr(i);
}
