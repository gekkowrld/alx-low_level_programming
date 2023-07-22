#include "main.h"

/**
 * cs_bits - A function that counts the bits and shifts
 * them one position to the right
 * @num: The number
 * Return: The count
*/

unsigned int cs_bits(unsigned long int num)
{
	unsigned int count = 0;

	while (num)
	{
		count += num & 1;
		num >>= 1;
	}
	return (count);
}

/**
 * flip_bits - A function to flip bits
 * @n: The number first number
 * @m: The number second number
 * Return: The bits to be flipped
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;

	return (cs_bits(diff));
}
