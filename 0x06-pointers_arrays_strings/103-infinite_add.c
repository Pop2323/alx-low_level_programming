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
	int i = 0;
	int j = 0;
	int len = 0;
	int c = 0;
	int v, int s, int m;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	len =  (i > j) ? i : j;

	if (len + 1 > size_r)
		return (0);
	r[len] = '\0';

	for (v = len - 1; v >= 0; v--)
	{
		i--;
		j--;
		m = (i >= 0) ? n1[i] - '0' : 0;
		s = (j >= 0) ? n2[j] - '0' : 0;

		r[v] = (m + s + c) % 10 + '0';
		c = (m + s + c) / 10;
	}
	if (c == 0)
	{
		r[len + 1] = '\0';
		if (len + 2 > size_r)
			return (0);
		while (len-- > 0)
			r[len + 1] = r[len];
		r[0] = c + '0';
	}
	return (r);
}
