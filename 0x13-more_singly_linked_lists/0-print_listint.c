#include "lists.h"

/**
 * print_listint -  func that prints all the elements of a list.
 * @h: ptr to the head of the list.
 *
 * Return: return The num of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
