# ifndef VARIADIC_FUNCTIONS_H_
# define VARIADIC_FUNCTIONS_H_

# include <stdio.h>
# include <stdarg.h>
# include <string.h>

/**
 * struct print - A format specifier for
 * printing out
 * @format: The format in which the printer
 * will take
 * @func: The function that will be passed
*/
typedef struct print
{
	char *format;
	void (*func)(va_list);
} pf;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

# endif
