# include "main.h"

/**
 * _putchar - A function to print our a character
 * @c: The character to be printed out
 * Return: The character
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
