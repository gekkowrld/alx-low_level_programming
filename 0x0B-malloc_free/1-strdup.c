# include "main.h"

/**
 * *_strdup - A function that returns a pointer to the allocated
 * memory if sucessfull
 * @str: The string that memmory will be allocated to
 * Return: The pointer to the memory
*/

char *_strdup(char *str)
{
	int len = strlen(str);
	int i = 0;
	char *arr;

	if (len == 0)
		return (NULL);

	arr = malloc(sizeof(str) * len);

	if (str == NULL)
		return (NULL);

	while (i < len)
	{
		arr[i] = *str++;
		i++;
	}

	return (arr);
}
