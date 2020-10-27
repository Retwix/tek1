/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** header
*/
#include <sys/types.h> 
#include <sys/stat.h> 
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#ifndef MY_H_
#define MY_H_

typedef struct info_s
{
	int type;
	char *title;
	char *line;

} info_t;

char *get_str(char *str, int begin, int end);
char **parser(char *str, char c);

#endif /* MY_H_ */