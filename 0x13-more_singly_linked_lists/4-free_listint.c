#include "lists.h"

/**
 * free_listint - This rrees a listint_t list.
 * @head: Ptr to the head of the list.
 *
 * Return: return void.
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
