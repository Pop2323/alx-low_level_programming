#include "lists.h"

/**
 * _strlen - func that return the len of the str
 *
 * @s: check the len of the str
 *
 * Return: return int len of the str
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
	i++;
	return (i);
}

/**
 * print_list - func that prints all the elements of a list_t lis
 *
 * @h: ptr for the 1st node eleent
 *
 * Return: return the size of the list
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
