#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 * @n: unsigned integer num
 *
 * Return: return NULL or value
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	size_t len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	res = (char *)malloc((len1 + n + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);

	strncpy(res, s1, len1);
	strncpy(res + len1, s2, n);
	res[len1 + n] = '\0';

	return (res);
}
