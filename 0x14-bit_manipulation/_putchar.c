# include "main.h"

/**
 * _putchar - Prints out a character at a time
 * @x: The character to be printed
 * Return: The written character
*/

int _putchar(char x)
{
	return (write(1, &x, 1));
}
