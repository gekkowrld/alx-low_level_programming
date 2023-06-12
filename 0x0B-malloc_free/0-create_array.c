# include "main.h"

/**
 * *create_array - A function that creates an array
 * that is initialized dynamically
 *
 * @size: The size of the array
 * @c: The type of the array
 *
 * Return: array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
