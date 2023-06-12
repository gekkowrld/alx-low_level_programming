# include "main.h"

/**
* _putchar - A function that prints a character at a time to the stdout
* @x: The character to be printed out
* Return: The int value of the character
*/

int _putchar(char x)
{
	return (write(1, &x, 1));
}
