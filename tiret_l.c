/*
** EPITECH PROJECT, 2022
** ls
** File description:
** flag_l
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

int my_printf(const char *format, ...);
void droit(struct stat info, mode_t mode, struct dirent *sd);

int flag_l(int ac, char **av)
{
    struct stat info; mode_t mode; char c;
    struct dirent *sd; char *tot; DIR *dir;
    if (ac == 2) {
        av[2] = ".";
    } dir = opendir(av[2]);
    if (dir == NULL) {
        printf("Error! Unable to open directory.\n");
        return (84);
    }
    while ((sd = readdir(dir)) != NULL) {
        struct stat s; struct passwd *passwd; struct group *grp;
        (sd->d_name[0] != '.') ?
            stat(sd->d_name, &info), mode = info.st_mode : 0;
        (S_ISDIR(mode)) ?
            c = 'd' :
            (S_ISREG(mode)) ?
            c = '-' : 0;
        my_printf("%c", c);
        droit(info, mode, sd);
    }
}

void droit(struct stat info, mode_t mode, struct dirent *sd)
{
    (mode & S_IRUSR) ? (my_printf("r")) : (my_printf("-"));
    (mode & S_IWUSR) ? (my_printf("w")) : (my_printf("-"));
    (mode & S_IXUSR) ? (my_printf("x")) : (my_printf("-"));
    (mode & S_IRGRP) ? (my_printf("r")) : (my_printf("-"));
    (mode & S_IWGRP) ? (my_printf("w")) : (my_printf("-"));
    (mode & S_IXGRP) ? (my_printf("x")) : (my_printf("-"));
    (mode & S_IROTH) ? (my_printf("r")) : (my_printf("-"));
    (mode & S_IWOTH) ? (my_printf("w")) : (my_printf("-"));
    (mode & S_IXOTH) ? (my_printf("x")) : (my_printf("-"));
    write(1, (ctime(&info.st_mtime) + 4), (strlen(ctime(&info.st_mtime)) - 13));
    my_printf("%s\n", sd->d_name);
}
