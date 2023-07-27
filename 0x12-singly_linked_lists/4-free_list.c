#include "lists.h"

/**
 * free_list - func that frees a list_t list.
 *
 * @head: Ptr to the head of the list.
 *
 * Return: return void val
 */
void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;

	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
