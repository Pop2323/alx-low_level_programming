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
	int i = 0; int j = 0; int k = 0;
	int carry;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	if (i + j >= size_r)
		return NULL;

	for (i--, j--; i >= 0 || j >= 0; i--, j--, k++)
	{
		int dig1 = (i >= 0) ? n1[i] - '0' : 0;
		int dig2 = (j >= 0) ? n2[j] - '0' : 0;
		
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}
	else
	{
		r[k] = '\0';
	}
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;

	}
	return (r);
}
