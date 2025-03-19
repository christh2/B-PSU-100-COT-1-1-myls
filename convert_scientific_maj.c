/*
** EPITECH PROJECT, 2022
** convert_scientific_E.c
** File description:
** convert_scientific_E
*/

#include <unistd.h>

void my_putchar(char c);
int my_put_nbr(int nb);

void my_put_nbr_float(double f);

void cast4(double f, int i)
{
    my_put_nbr_float(f);
    my_putchar('E');
    my_putchar('+');
    my_putchar ('0');
    my_put_nbr(i);
}

void convert_scientific_maj(double f)
{
    int i = 0;
    for (i = 0; f >= 10 || f <= -10; i++) {
        f = f / 10;
    }
    cast4(f, i);
}
