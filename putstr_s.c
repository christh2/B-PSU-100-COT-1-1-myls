/*
** EPITECH PROJECT, 2022
** putstr.c
** File description:
** putstr.c
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);
int my_put_nbr(int nb);

int convert_octal(unsigned int n);

char *my_strcpy(char *dest, char const *src);

void cast(int i, const char *str)
{
    int count = 0;
    my_putchar('\\');
    my_putchar('0');
    my_putchar('0');
}

void cast2(int i, const char *str)
{
    int count = 0;
    my_putchar('\\');
    my_putchar('0');
}

void putstr_s(char const *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 32 || str[i] >= 127) && (str[i] >= 0 && str[i] <= 7)) {
            cast(i, str);
            convert_octal(str[i]);
        }
        if ((str[i] < 32 || str[i] >= 127) && (str[i] >= 8 && str[i] <= 31)) {
            cast2(i, str);
            convert_octal(str[i]);
        }
        if (str[i] > 32 || str[i] <= 127) {
            my_putchar(str[i]);
        }
    }
}
