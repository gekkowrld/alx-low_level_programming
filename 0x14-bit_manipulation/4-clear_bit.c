#include "main.h"

/**
 * clear_bit - A function that sets a value at
 * a position to 0
 * @n: The number to be changed
 * @index: The location of the bit to be changed
 * Return: 1 if true -1 if false
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = U_SIZE;
	unsigned long int mask;

	if (index >= size)
		return (-1);

	mask = MASK;
	*n &= ~mask;

	return (1);
}
