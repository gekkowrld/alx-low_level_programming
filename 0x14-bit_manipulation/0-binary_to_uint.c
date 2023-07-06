# include "main.h"

int myPow(int x, int n);

/**
 * binary_to_uint - Convert a binary to decimal
 * @b: The "number" to be calculated
 * Return: The decimal number
*/

unsigned int binary_to_uint(const char *b)
{
	int len, value = 0, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);

	len = strlen(b);

	for (i = 0; b[i] != '\0'; i++)
	{
		value += (b[i] - 48) * myPow(2, (len - i - 1));
	}

	return (value);
}

/**
 * myPow - Calculate the power
 * @x: The number to be 'powered'
 * @n: The power
 * Return: The 'powered' number
*/

int myPow(int x, int n)
{
	int i; /* Variable used in loop counter */
	int number = 1;

	for (i = 0; i < n; ++i)
		number *= x;

	return (number);
}
