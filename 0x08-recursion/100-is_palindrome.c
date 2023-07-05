#include "main.h"

/**
 * check_recursive - check the left and right index
 *
 * @s: ptr to str
 * @left: the left side index
 * @right: the right side index
 *
 * Return: int
*/

int check_recursive(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (check_recursive(s, left + 1, right - 1));
}
/**
 * is_palindrome - returns 1 if a str is a palindrome and 0 if not
 *
 * @s: check str
 *
 * Return: return 1 or 0
*/

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check_recursive(s, 0, len - 1));
}
