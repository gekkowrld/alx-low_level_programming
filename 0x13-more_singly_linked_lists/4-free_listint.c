# include "lists.h"

/**
 * free_listint - Free the memory allocated to
 * the list(s)
 * @head: The beginning of the list
*/

void free_listint(listint_t *head)
{
	listint_t *node, *n_node;

	node = head;
	while (node != NULL)
	{
		n_node = node->next;
		free(node);
		node = n_node;
	}
}
