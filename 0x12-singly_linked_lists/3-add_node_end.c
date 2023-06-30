# include "lists.h"

/**
 * add_node_end - Add a node to the end of a list
 * @head: The beginning of a linked list
 * @str: The string that will be added
 * Return: The newly created list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(struct list_s));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = node;
	}

	return (node);
}
