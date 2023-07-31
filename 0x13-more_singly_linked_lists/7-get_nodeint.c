#include "lists.h"

/**
 * get_nodeint_at_index - The nth node of a linked list.
 * @head: Potr to the head of the list.
 * @index: The index of the node, starting from 0.
 *
 * Return: return Ptr to the nth node, or NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current && count < index)
	{
		current = current->next;
		count++;
	}
	return (current);
}
