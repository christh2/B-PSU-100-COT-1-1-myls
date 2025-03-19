/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** my_strcpy
*/

#include <stdio.h>
#include <unistd.h>


char *my_strcpy (char *dest, char const *src)
{
    int a;
    for (a = 0; src[a] != '\0'; a++) {
        dest[a] = src[a];
    }
    dest[a] = ('\0');
    return dest;
}
