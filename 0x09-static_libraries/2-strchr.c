# include "main.h"

/**
 * _strchr - used to return a pointer to the first
 * occurrence of the pointer
 * @c: The character to be compared to
 * @s: The src string
 * Return: 0
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return ('\0');
}
