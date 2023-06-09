# include "main.h"

/**
* _strcat - concatinates src string to dest string
* @src: The source string
* @dest: The destination string
* Return: char
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
