# include "variadic_functions.h"

/**
 * sum_them_all - A function that sums all the
 * arguments passed to it
 * @n: The number of arguments passed to it
 * Return: The sum
*/

int sum_them_all(const unsigned int n, ...)
{
	size_t i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);

}
