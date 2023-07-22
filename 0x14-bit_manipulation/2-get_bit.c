#include "main.h"

/**
 * get_bit - Gets a bit at a certain location
 * @n: The number where the bit will be looked at
 * @index: The index of the bit to be looked at
 * Return: The number found
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	if (index >= size)
		return (-1);

	mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
