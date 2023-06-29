#include "main.h"

/**
 * *infinite_add - function that adds two numbers
 * @n1: 1st num
 * @n2: 2nd num
 * @size_r: the len of result
 * @r: result
 * Return: calc
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 + len2 >= size_r)
		return (0);
	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = size_r - 1;

	while (i >= 0 || j >= 0)
	{
		int sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[k] = sum % 10 + '0';
		i--;
		j--;
		k++;
	}
	if (carry > 0)
	{
		if (k < 0)
			return (0);
		r[k] = carry + '0';
	}
	return (&r[k]);
}
