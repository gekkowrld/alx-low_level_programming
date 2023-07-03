# include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of the list
 * @head: The beginning of the list
 * @n: The data of the particular node
 * Return: The node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(struct listint_s));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		listint_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = node;
	}

	return (node);
}
