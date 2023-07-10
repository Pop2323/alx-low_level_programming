#include "main.h"

/**
 * *create_array - creates an arr of chars and initiali it with a specific char
 *
 * @size: size of the arry
 * @c: character to initialize
 *
 * Return: NuLL or ptr of the array
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
