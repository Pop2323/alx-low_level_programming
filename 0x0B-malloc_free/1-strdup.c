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
	size_t len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
