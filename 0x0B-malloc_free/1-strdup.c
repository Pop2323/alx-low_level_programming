#include "main.h"

/**
 * *_strdup - returns a ptr to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: return 0
*/

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	size_t len = strlen(str);
	char *dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
