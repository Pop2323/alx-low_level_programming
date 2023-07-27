#include "lists.h"

/**
 * add_node_end - func that adds a new node at the end of a list_t list.
 *
 * @head: Double ptr to the head(first) of the list.
 * @str: Str to be duplicated and stored in the new node.
 *
 * Return: return the addr of the new element (new node), or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last_node = *head;

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
	if (last_node)
	{
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
