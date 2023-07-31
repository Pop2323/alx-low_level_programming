#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Ptr to the head of the list.
 *
 * Return: return a ptr to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL, *next_node;

	if (!head || !*head)
		return (NULL);

	current = *head;
	*head = NULL;
	while (current)
	{
		next_node = current->next;
		current->next = *head;
		*head = current;
		current = next_node;
	}
	return (*head);
}
