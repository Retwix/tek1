/*
** EPITECH PROJECT, 2018
** name
** File description:
** parser
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

void dis_help(void)
{
    write(1, "Usage:\t./yolotron-asm [source file] [output file]\n", 50);
}

void open_read(char *source, char *output)
{
    int fd = open(output, O_WRONLY);
    int nb = 17891;
    int nb1 = 21;
    int res = 17912;
    int add = 0x01;
    write(fd, &add, sizeof(add));
    write(fd, &nb, sizeof(nb));
    write(fd, &nb1, sizeof(nb1));
    // write(fd, &res, sizeof(res));
}

int main(int ac, char **av)
{
    if (strcmp(av[1], "-h") == 0)
        dis_help();
    if (ac != 3)
        dis_help();
    else
        open_read(av[1], av[2]);
    return (0);
}