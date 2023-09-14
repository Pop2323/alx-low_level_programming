#include "lists.h"

/**
* dlistint_len - func that returns the num of elms in a linked dlistint_t list.
*
* @h: head of the list.
*
* Return: return the num of node.
*/

size_t dlistint_len(const dlistint_t *h)
{
	int res = 0;

	if (h == NULL)
		return (res);
	while (h != NULL)
	{
		res++;
		h = h->next;
	}
	return (res);
}
