#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define U_SIZE (sizeof(unsigned long int) * 8)
#define MASK (1UL << index);

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char x);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
