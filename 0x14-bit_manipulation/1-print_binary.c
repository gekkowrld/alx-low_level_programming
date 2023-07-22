# include "main.h"

/**
 * print_binary - prints out binary representation
 * of decimal numbers
 * @n: The number to be converted
*/

void print_binary(unsigned long int n)
{
	unsigned long int size = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (size - 1);
	unsigned long int i;

	int flag = 0;

	for (i = 0; i < size; i++)
	{
		if ((n & mask) != 0 || flag == 1)
		{
			_putchar((n & mask) ? '1' : '0');
			flag = 1;
		}
		mask >>= 1;
	}

	if (flag == 0)
		_putchar('0');
}
