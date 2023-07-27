#include "lists.h"

/**
 * list_len - funct that returns the num of elements in a linked list_t list.
 *
 * @h: Ptr to the head (first) of the list.
 *
 * Return: return the num of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
