#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Ptr to a ptr to the head of the list.
 *
 * Return: return the pop node value
*/
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (!head || !*head)
		return (0);
	current = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = current;
	return (data);
}
