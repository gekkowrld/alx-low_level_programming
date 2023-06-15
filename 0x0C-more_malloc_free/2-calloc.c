# include "main.h"

/**
 * _calloc - A function that allocates memory to "nmemb"
 * of size "size"
 * @nmemb: The array that holds the data
 * @size: The size of the array
 * Return: arr or void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int t_len;
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t_len = nmemb * size;

	arr = malloc(t_len);

	if (arr == NULL)
		return (NULL);

	memset(arr, 0, t_len);

	return (arr);
}
