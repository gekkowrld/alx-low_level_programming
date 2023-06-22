# include "function_pointers.h"

/**
 * array_iterator - Iterates over an array of elements
 * @array: The array that will be printed
 * @size: The size of the array
 * @action: The action to be performed on the elements
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
