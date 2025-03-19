/*
** EPITECH PROJECT, 2022
** strap
** File description:
** strap
*/

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdlib.h>
#include <pwd.h>
#include <grp.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <getopt.h>
#include <fcntl.h>
#include <string.h>
#include <getopt.h>

void declare(void);
int coupe(int ac, char **av);
int list_a( int ac, char **av);
void my_ls_l(int ac, char **av);
int my_printf(const char *format, ...);
int list(int ac, char **av);
int flag_l(int ac, char **av);

int main(int ac, char **av)
{
    if (ac == 1) {
        list(ac, av);
    }
    if (ac >= 2) {
        if (av[1][0] == '-' && av[1][1] == 'a') {
            list_a(ac, av);
        }
        if (av[1][0] == '-' && av[1][1] == 'l') {
            flag_l(ac, av);
        }
    } return 0;
}
