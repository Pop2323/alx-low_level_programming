#include "lists.h"

/**
 * listint_len - func returns the num of elements in a list.
 * @h: Ptr to the head of the list.
 *
 * Return: return the num of elements in the list.
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
