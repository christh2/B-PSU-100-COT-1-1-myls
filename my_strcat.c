/*
** EPITECH PROJECT, 2022
** my_strcat
** File description:
** my_strcat
*/

#include <unistd.h>
#include <stdio.h>

char *my_strcat(char *dest, char const *src)
{
    int i;
    int j;
    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; src[j] != '\0'; j++, i++) {
        dest[i] = src[j];
    }
    dest[i] = '\0';
    return dest;
}
