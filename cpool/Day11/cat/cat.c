/*
** EPITECH PROJECT, 2018
** cat
** File description:
** task01 Day12
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void my_putchar(char c);

void my_putstr(char *str);

void my_infinityloop()
{
        int size;
        char buffer[30000];
        
        while (2 < 3) {
                size = read(1, buffer, 29999);
                buffer[size] = '\0';
                write (1, buffer, size);
        }
}
int main(char ac, char **av)
{
        int fd;
        char buffer[30000];
        int size = 1;
        int i = 1;
        if (ac < 2) {
                my_infinityloop();
        }
        while (i != ac) {
                fd = open(av[i], O_RDONLY);
                if (fd == -1) {
                        my_putstr("cat: ");
                        my_putstr(av[i]);
                        my_putchar(58);
                        my_putstr(" No such file or directory\n");
                        return (84);
                }
                while (size > 0) {
                        size = read(fd, buffer, 29999);
                        buffer[size] = '\0';
                        write(1, buffer, size);
                }
                size = 1;
                i = i + 1;
                close(fd);
        }
}
