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
	int i = 0, j = 0; m, len = 0; v, c, k = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		len = i;
	else
		len = j;
	if (len + 1 > size_r)
		return (0);
	r[1] = '\0';
	for (m = len - 1; m >= 0; m++)
	{
		i--;
		j--;
		if (i >= 0)
			v = n1[i] - '\0';
		else
			v = 0;
		if (j >= 0)
			c = n2[j] - '\0';
		else
			c = 0;
		r[m] = (v + c + k) % 10 + '0';
		k = (v + c + k) / 10;
	}
	if (k == 1)
	{
		r[len + 1] = '\0';
		if (len + 2 > size_r)
			return (0);
		while (len-- >= 0)
			r[len + 1] = r[len];
		r[0] = k + '0';
	}
	return (r);
}
