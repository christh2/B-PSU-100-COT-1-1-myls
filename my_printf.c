/*
** EPITECH PROJECT, 2022
** my_printf.c
** File description:
** my_printf.c
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

static int write_count;
int convert_base(unsigned int nb);
int convert_octal(unsigned int n);
int my_put_nbr(int nb);
int my_put_unsigned_nbr(unsigned int nb);
int *my_putstr(char *str);
char *my_strcpy(char *dest, char const *src);
int convert_hexa(unsigned int n);
int convert_hexa_maj(unsigned int n);
void functions(int* i, const char *format, va_list mini);
void functions2(int* i, const char *format, va_list mini);
void functions3(int* i, const char *format, va_list mini);
void my_put_address(long long int nb);
void convert_scientific_maj(double f);
void convert_scientifc_e(double f);
void putstr_s(char const *str);
void my_put_nbr_float(double f);
int count(const char *str);
char *my_strcat(char *dest, char const *src);

void my_putchar(char c)
{
    write(1, &c, 1);
    write_count++;
}

int my_printf(const char *format, ...)
{
    va_list mini;
    va_start(mini, format);
    int i;
    for (i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            functions(&i, format, mini);
            functions2(&i, format, mini);
            functions3(&i, format, mini);
            i++;
        } else {
            my_putchar(format[i]);
        }
    }
    return (write_count);
    va_end(mini);
}
