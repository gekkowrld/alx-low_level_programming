# include "main.h"

/**
 * malloc_checked - A function that checks if malloc is
 * performed successfully
 * @b: The size/length of the memory to be allocated
 * Return: void
*/

void *malloc_checked(unsigned int b)
{
	char *arr;

	arr = malloc(sizeof(arr) * b);

	if (arr == NULL)
		exit(98);
	else
		return (arr);
}
