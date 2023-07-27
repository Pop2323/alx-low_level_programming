#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 *
 * @head: Ptr to the head node of the list.
 * @str: The str to be duplicated and added to the new node.
 *
 * Return: return the addr of the new element, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!head || !new_node)
		return (NULL);
	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(new_node->str);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
