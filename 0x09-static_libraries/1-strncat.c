#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * @n: The number n
 * Return: dest  value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
