#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Print out a char
 * Return: 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
