/*
** EPITECH PROJECT, 2018
** concat_params
** File description:
** task02
*/
char *concat_params(int argc, char **argv)
{
    int i;
    int y;
    
    i = 1;
    y = 0;
    while(i < argc) {
        while(argv[0][y] != '\0') {
            y = y + 1;
        }
        argv[0][y] = '\n';
        i = i + 1;
        y = 0;
    }
    return (argv[0]);
}
