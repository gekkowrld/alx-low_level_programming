# include "main.h"
# include <string.h>
# include <stdbool.h>

/**
 * _strspn - checks where the char is spotted first,
 * and returns the location
 * @s: The original string
 * @accept: The test string
 * Return: The position of the string
*/
unsigned int _strspn(char *s, char *accept)
{
	size_t i, l, j = strlen(s), k = strlen(accept);

	for (i = 0; i < j; i++)
	{
		bool match = false;

		for (l = 0; l < k; l++)
			if (accept[l] == s[i])
			{
				match = true;
				break;
			}
		if (!match)
			break;
	}

	return (i);
}
