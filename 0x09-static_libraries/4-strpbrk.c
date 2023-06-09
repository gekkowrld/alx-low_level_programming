# include "main.h"

/**
 * _strpbrk - prints out the remaining characters after encountering
 * the first matching character
 * @s: The src string
 * @accept: The reference string
 * Return: the remaining string
*/

char *_strpbrk(char *s, char *accept)
{
	char *i;

	while (*s != '\0')
	{
		i = accept;
		while (*i != '\0')
		{
			if (*s == *i)
				return ((char *) s);
			i++;
		}
		s++;
	}
	return ('\0');
}
