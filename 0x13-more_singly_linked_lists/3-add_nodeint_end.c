#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list.
 * @head: Ptr to a ptr to the head of the list.
 * @n: Value to be added to the new node.
 *
 * Return: return addr of the new element (node), or NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node;

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (!*head)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
