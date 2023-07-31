#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Ptr to the head of the list.
 * @idx: Index of the list where insert the new node.
 * @n: Value stored in the new node.
 *
 * Return: return the address of the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node = malloc(sizeof(listint_t));
	unsigned int count = 0;

	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
