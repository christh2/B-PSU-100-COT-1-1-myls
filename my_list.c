/*
** EPITECH PROJECT, 2022
** ls_flag
** File description:
** ls_a_flag
*/

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int my_printf(const char *format, ...);
char *my_strcat(char *dest, char const *src);

int list_a(int ac, char **av)
{
    DIR *rep; struct dirent *sd;
    if (ac == 2) {
        av[2] = ".";
    } rep = opendir(av[2]);
    if (rep == NULL) {
        my_printf("Error! Unable to open directory.\n");
        return 84;
    }
    while ((sd = readdir(rep)) != NULL) {
        my_printf("%s\n", sd->d_name);
    }
    closedir(rep);
    return (0);
}

int list( int ac, char **av)
{
    DIR *dir; struct dirent *ok;
    if (ac == 1) {
        av[1] = ".";
    } dir = opendir(av[1]);
    if (dir == NULL) {
        my_printf("Error! Unable to open directory.\n");
        return 84;
    }
    while ((ok = readdir(dir)) != NULL) {
        if (ok->d_name[0] != '.')
            my_printf("%s\n", ok->d_name);
    } closedir(dir); return (0);
}
