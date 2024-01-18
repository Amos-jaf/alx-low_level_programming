#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int str_len(char *str);
char *str_n(char *buf, unsigned int b_len, char *s1, char *s2, unsigned int n);
char *cpy_str(char *buffer, char *str, unsigned int n_chars);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif /* MAIN_H */
