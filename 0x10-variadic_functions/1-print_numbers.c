# include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed with their
 * separators
 * @separator: This is the delimeter between the
 * numbers
 * @n: The number of arguments to be passed (numbers)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);

}
