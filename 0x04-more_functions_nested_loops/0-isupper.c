#include "main.h"

/**
 * _isupper - check if c isupper or not
 *
 * @c: that check the alph
 *
 * Return: return 1 if upper 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
