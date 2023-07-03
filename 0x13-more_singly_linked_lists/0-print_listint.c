# include "lists.h"

/**
 * print_listint - Lists the number of nodes
 * a linked list has
 * @h: An instance of a linked list/node
 * Return: The number of elements
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
