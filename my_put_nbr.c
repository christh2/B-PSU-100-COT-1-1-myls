/*
** EPITECH PROJECT, 2022
** putnbr
** File description:
** putnbr.c
*/

void my_putchar(char c);
int my_put_nbr(int nb)
{
    int x;
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
    }
    x = nb % 10 + 48;
    my_putchar(x);
    return x;
}
