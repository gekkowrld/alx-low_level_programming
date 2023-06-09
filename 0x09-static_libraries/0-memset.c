# include "main.h"

/**
 * _memset - changes the character into another one
 * @s: The src string
 * @n: The number of strings to be changed
 * @b: The string that will be changed to
 * Return: the altered string
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
