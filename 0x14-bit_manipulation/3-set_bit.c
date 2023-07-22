#include "main.h"

/**
 * set_bit - A fuction that sets a value of a bit
 * to 1 at an index
 * @n: The number whose value is to be changed
 * @index: Where the number @n will be changed
 * Return: 1 for true and -1 for false
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = U_SIZE;
	unsigned long int mask;

	if (index >= size)
		return (-1);

	mask = MASK;
	*n |= mask;

	return (1);
}
