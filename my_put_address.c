/*
** EPITECH PROJECT, 2022
** my_address
** File description:
** my_adress
*/

#include <unistd.h>
#include <unistd.h>

void my_putchar(char c);
int convert_hexa_adress(void* n);

int *my_putstr(char *str);

void my_put_address(void* nb)
{
    if ((void*)nb == 0 || (void*)nb == NULL) {
    my_putstr("(nil)");
    } else {
        my_putstr("0x");
        convert_hexa_adress(&nb);
    }
}
