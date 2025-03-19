/*
** EPITECH PROJECT, 2022
** putstr
** File description:
** putstr.c
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);
int *my_putstr(char *str)
{
    int i = 0;
    for (int i = 0; str[i] != ('\0'); i++)
        my_putchar(str[i]);
}
