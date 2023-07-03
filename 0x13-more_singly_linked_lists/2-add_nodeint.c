# include "lists.h"

/**
 * add_nodeint - Add a node to the beginning of the
 * linked list
 * @head: The beginning of a linked list
 * @n: The data contained in the list
 * Return: The node
 *
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(struct listint_s));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	node->next = *head;
	*head = node;

	return (node);
}
