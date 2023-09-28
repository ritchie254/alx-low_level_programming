#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

unsigned int binary_to_uint(const char *b);
int set_bit(unsigned long int *n, unsigned int index);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int _putchar(char c);
#endif
