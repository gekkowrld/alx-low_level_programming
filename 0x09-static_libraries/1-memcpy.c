#include "main.h"

/**
 * _memcpy - copies string pointer from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The number of chars to be copied
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
