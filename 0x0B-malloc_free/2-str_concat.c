#include "main.h"

/**
 * *str_concat - function that concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: return
*/

char *str_concat(char *s1, char *s2)
{
	size_t len_1;
	size_t len_2;
	char *con;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_1 = strlen(s1);
	len_2 = strlen(s2);
	con = (char *)malloc((len_1 + len_2 + 1) * sizeof(char));

	if (con == NULL)
	{
		return (NULL);
	}

	strcpy(con, s1);
	strcat(con, s2);

	return (con);
}
