/*
** EPITECH PROJECT, 2022
** functions
** File description:
** functions.c
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void my_putchar(char c);
int my_put_nbr(int nb);
void my_put_address(long long nb);
int my_put_unsigned_nbr(unsigned int nb);
void convert_scientific_e(double f);
void convert_scientific_maj(double f);
void my_put_nbr_float(double f);
void functions(int* i, const char *format, va_list mini)
{
    if (format[*i + 1] == 'c') {
        my_putchar(va_arg(mini, int));
    } else if (format[*i + 1] == 'd' || format[*i + 1] == 'i') {
        my_put_nbr(va_arg(mini, int));
    }
    if (format[*i + 1] == 'u') {
        my_put_unsigned_nbr(va_arg(mini, unsigned int));
    }
    if (format[*i + 1] == 'f') {
        my_put_nbr_float(va_arg(mini, double));
    }
    if (format[*i +  1] == 'p') {
        my_put_address(va_arg(mini, long long));
    }
    if (format[*i + 1] == 'e') {
        convert_scientific_e(va_arg(mini, double));
    }
    if (format[*i + 1] == 'E') {
        convert_scientific_maj(va_arg(mini, double));
    }
}
