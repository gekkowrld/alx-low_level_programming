#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char x);
int get_bit(unsigned long int n, unsigned int index);

#endif
