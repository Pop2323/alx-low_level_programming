#include "lists.h"

/**
 * free_listint2 - Frees a list and sets the head to NULL
 * @head: Ptr to a ptr to the head of the list
 *
 * Return: return void
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (!head)
		return;

	current = *head;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
