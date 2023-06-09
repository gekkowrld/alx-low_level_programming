# include "main.h"
/**
* _strncpy - copies a string from the src to the dest
* Return: dest value
* @dest: The destination string
* @src: The source string
* @n: the counter var
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
