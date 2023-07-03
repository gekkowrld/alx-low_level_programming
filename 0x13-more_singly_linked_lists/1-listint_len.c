# include "lists.h"

/**
 * listint_len - Return the number of nodes in a list
 * @h: An instance of a list/node
 * Return: The number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
