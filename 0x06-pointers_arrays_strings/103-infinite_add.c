#include "main.h"

/**
 * *infinite_add - function that adds two numbers
 * @n1: 1st num
 * @n2: 2nd num
 * @size_r: the len of result
 * @r: result
 *
 * Return: calc
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0; j = 0; len = 0; c = 0; v, s, m;

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
	r[len] = '\0';
	for (v = len - 1; v >= 0; v--)
	{
		i--;
		j--;
		if (i >= 0)
			m = n1[i] - '0';
		else
			m = 0;
		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;
		r[v] = (m + s + c) % 10 + '0';
		c = (m + s + c) / 10;
	}
	if (c == 0)
	{
		r[len + 1] = '\0';
		if (len + 2 > size_r)
			return (0);
		while (len-- >= 0)
			r[len + 1] = r[len];
		r[0] = c + '0';
	}
	return (r);
}
