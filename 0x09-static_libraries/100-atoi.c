#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int j = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + j) != '\0')
	{
		if (size > 0 && (*(s + j) < '0' || *(s + j) > '9'))
			break;

		if (*(s + j) == '-')
			pn *= -1;

		if ((*(s + j) >= '0') && (*(s + j) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		j++;
	}

	for (i = j - size; i < j; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
