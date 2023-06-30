# include "lists.h"

/**
 * add_node - Adds a node to the beginning of the
 * linked list
 * @head: The linked list's head
 * @str: The string to hold the linked list content
 * Return: Return the new node
*/

list_t *add_node(list_t **head, const char *str)
{

	list_t *node = malloc(sizeof(struct list_s));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}
