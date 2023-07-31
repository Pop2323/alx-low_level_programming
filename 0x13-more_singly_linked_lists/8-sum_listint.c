#include "lists.h"

/**
 * sum_listint - Calcs the sum of all the data
 * @head: Potr to the head of the list.
 *
 * Return: return the sum of all the data.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
