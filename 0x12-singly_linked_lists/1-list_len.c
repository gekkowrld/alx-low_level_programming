# include "lists.h"

/**
 * list_len - Lists the number of elements in a linked list
 * @h: The list whose length is to be determined
 * Return: The length of the linked list
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
