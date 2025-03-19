/*
** EPITECH PROJECT, 2022
** essai.c
** File description:
** essai.c
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);
int my_put_nbr(int nb);

int count(const char *str)
{
    int i = 0; int x = 0;
    for (i = 0; str[i] != '%'; i++) {
        x++;
    }
    return (x);
}

/*int main()
{
    count("hel%nlo");
}*/
