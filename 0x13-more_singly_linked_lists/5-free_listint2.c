# include "lists.h"

/**
 * free_listint2 - A function to free memory
 * from a list
 * @head: A pointer to the beginning of the list
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *n_node;

	node = *head;
	while (node != NULL)
	{
		n_node = node->next;
		free(node);
		node = n_node;
	}
}
