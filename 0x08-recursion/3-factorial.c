# include "main.h"

/**
 * factorial - A function that does factorials
 * @n: The number that factorial will be performed on
 * Return: factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
