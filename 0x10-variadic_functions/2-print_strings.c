# include "variadic_functions.h"

/**
 * print_strings - A function to print strings
 * @separator: The delimeter that will be used
 * @n: The number of arguments that will be passed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char*));
		if (i != (n - 1))
			printf("%s", separator);
	}

	puts("");

	va_end(args);
}
