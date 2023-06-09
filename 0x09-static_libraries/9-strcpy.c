#include "main.h"
#include <stdio.h>
/**
 * * _strcpy - copies the the string from src to dest
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (j >= 0)
	{
		*(dest + j) = *(src + j);
		if (*(src + j) == '\0')
			break;
		j++;
	}
	return (dest);
}
