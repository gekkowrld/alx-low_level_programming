# include "main.h"

/**
 * array_range - A function to create an array from
 * min to max
 * @min: The starting point
 * @max: The end point
 * Return: arr
*/

int *array_range(int min, int max)
{
	int t_len = max - min + 1;
	int *arr, i;

	if (t_len < 0)
		return (NULL);

	arr = malloc(sizeof(int) * t_len);

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}
	return (arr);
}
