/*
** EPITECH PROJECT, 2022
** function3
** File description:
** function3
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void my_putchar(char c);
void putstr_s(char const *str);
int *my_putstr(char *str);
int count(const char *str);
char *my_strcpy(char *dest, char const *src);

void functions3(int *i, const char *format, va_list mini)
{
    if (format[*i + 1] == 'm') {
        my_putstr("Success");
    }
    if (format[*i + 1] == 'S') {
        putstr_s(va_arg(mini, char*));
    }
    if (format[*i + 1] == 'n') {
        count(format);
    }
}
