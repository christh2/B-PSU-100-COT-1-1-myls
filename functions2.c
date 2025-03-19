/*
** EPITECH PROJECT, 2022
** functions2
** File description:
** functions2.c
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void my_putchar(char c);

int convert_base(unsigned int nb);

int convert_octal(unsigned int n);

int convert_hexa(unsigned int n);

int convert_hexa_maj(unsigned int n);

int *my_putstr(char *str);

void putstr_s(char const *str);

char *my_strcpy(char *dest, char const *src);

void functions2(int* i, const char *format, va_list mini)
{
    if (format[*i + 1] == 'b') {
        convert_base(va_arg(mini, int));
    }
    if (format[*i + 1] == 'o') {
        convert_octal(va_arg(mini, int));
    }
    if (format[*i + 1] == 'x') {
        convert_hexa(va_arg(mini, int));
    }
    if (format[*i + 1] == 'X') {
        convert_hexa_maj(va_arg(mini, int));
    }
    if (format[*i + 1] == 's') {
        my_putstr(va_arg(mini, char*));
    }
    if (format[*i + 1] == '%') {
        my_putchar('%');
    }
}
