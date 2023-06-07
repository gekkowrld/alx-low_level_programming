# include "main.h"

/**
 * _strlen_recursion - Counts the length of a string recursively
 * @s: The stirng to be counted
 * Return: len or 0
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
		len = 1 + _strlen_recursion(s + 1);

	return (len);
}
