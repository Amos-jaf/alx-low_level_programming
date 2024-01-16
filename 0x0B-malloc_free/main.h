#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *cpy_str(char *buffer, unsigned int len, char *str1, char *str2);
unsigned int len_str(char *str);

#endif /* MAIN_H */
