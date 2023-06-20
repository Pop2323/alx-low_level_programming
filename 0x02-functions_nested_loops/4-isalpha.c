#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: check the alphabetical character
 *
 * Return: return 1 if the result is alph else return 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 90 && c <= 122))
		return (1);
	return (0);
}
