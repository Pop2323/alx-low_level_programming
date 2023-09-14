#include "lists.h"

/**
 * sum_dlistint - the sum of all the data (n) of a dlistint_t linked.
 *
 * @head: head of the list.
 *
 * Return: return the value of calc
*/
int sum_dlistint(dlistint_t *head)
{
	int calc = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			calc += head->n;
			head = head->next;
		}
	}
	return (calc);
}
