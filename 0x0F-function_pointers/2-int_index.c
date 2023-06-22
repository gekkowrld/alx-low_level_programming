# include "function_pointers.h"

/**
 * int_index - Prints out the index of numbers
 * @array: The array that contains the number
 * @size: The size of the array
 * @cmp: The function that is used for comparision
 * Return: Index or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);

}

