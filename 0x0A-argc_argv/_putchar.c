# include "main.h"

/**
 * _putchar - A function that writes a character to stdout
 * @c: The character to be written
 * Return: On success 1.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
