# include "variadic_functions.h"

/**
 * print_char - Prints out single characters
 * @args: The arguments to be passed
*/

void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
 * print_int - Prints out integers
 * @args: The arguments to be passed
*/

void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%i", i);
}

/**
 * print_str - Prints out strings (array of chars)
 * @args: The arguments to be passed
*/

void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	printf("%s", str);
}

/**
 * print_float - Prints out floats
 * @args: The arguments to be passed
*/

void print_float(va_list args)
{
	float f = va_arg(args, double);

	printf("%f", f);
}

/**
 * print_all - Prints the characters according
 * to their format specifier
 * @format: The format specifiers
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	int len = strlen(format);
	va_list args;
	pf fmt[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_str},
		{"f", print_float},
		{NULL, NULL}
	};
	va_start(args, format);

	while (i < len)
	{
		j = 0;
		while (fmt[j].format != NULL)
		{
			if (format[i] == fmt[j].format[0])
			{
				fmt[j].func(args);
				if (i != (len - 1))
					printf(", ");
				break;
			}
			j++;
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
