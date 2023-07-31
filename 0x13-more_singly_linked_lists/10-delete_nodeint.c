#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index.
 * @head: Ptr to the head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: return 1 if the deletion succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int count = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	while (current)
	{
		if (count == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		count++;
		prev = current;
		current = current->next;
	}
	return (-1);
}
