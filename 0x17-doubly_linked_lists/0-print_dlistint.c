#include "lists.h"

/**
 * print_dlistint -  func that prints all the elements of a dlistint_t list.
 *
 * @h: head of the list.
 *
 * Return: return the node nums
*/
size_t print_dlistint(const dlistint_t *h)
{
	int res = 0;
    
	if (h == NULL)
		return (res);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		res++;
		h = h->next;
	}
	return (res);
}
