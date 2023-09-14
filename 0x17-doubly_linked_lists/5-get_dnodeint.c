#include "lists.h"

/**
 * get_dnodeint_at_index - func returns the nth node of a dlistint_t linked.
 *
 * @head: head of the list.
 * @index: node index.
 *
 * Return: return node value.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head->prev != NULL; i++)
		head = head->prev;
	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			break;
		head = head->next;
	}
	return (head);
}
