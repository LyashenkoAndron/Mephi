#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void make_array_words(char ***arr, char **line, int *cnt);
void sort(char ***arr, int cnt);
void print_array(char **arr, int cnt);

#endif
