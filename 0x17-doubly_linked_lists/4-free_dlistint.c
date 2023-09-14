#include "lists.h"

/**
* free_dlistint - func that frees a dlistint_t list.
*
* @head: head of the list.
*
* Return: return void (nothing)
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *res;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((res = head) != NULL)
	{
		head = head->next;
		free(res);
	}
}
