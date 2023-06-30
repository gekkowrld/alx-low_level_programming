# include "lists.h"

/**
 * free_list - Free up the linked list
 * @head: The beginning of a list
 *
*/

void free_list(list_t *head)
{
	list_t *node, *n_node;

	node = head;
	while (node != NULL)
	{
		n_node = node->next;
		free(node->str);
		free(node);
		node = n_node;
	}
}
