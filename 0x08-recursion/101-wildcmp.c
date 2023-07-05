#include "main.h"

/**
 * check_recursive - check the s1 and s2
 *
 * @s1: the 1st str
 * @s2: the 2nd str
 *
 * Return: return int
*/

int check_recursive(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (check_recursive(s1, s2 + 1) ||
				(*s1 != '\0' && check_recursive(s1 + 1, s2)));
	}
	if (*s1 == *s2)
	{
		return (check_recursive(s1 + 1, s2 + 1));
	}
	return (0);
}

/**
 * wildcmp - compares two strs and returns 1 else return 0
 *
 * @s1: 1st str
 * @s2: 2nd str
 *
 * Return: return 1 if identical otherwise 0
*/

int wildcmp(char *s1, char *s2)
{
	return (check_recursive(s1, s2));
}
