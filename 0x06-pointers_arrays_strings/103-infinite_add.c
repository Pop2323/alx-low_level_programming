#include "main.h"

/**
 * *infinite_add - function that adds two numbers
 * @n1: 1st num
 * @n2: 2nd num
 * @size_r: the len of result
 * @r: result
 * Return: calc
*/

char *reverse_string(char *str)
{
	int length = strlen(str);
	int i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return str;
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 + len2 >= size_r)
	{
		return (NULL);
	}

	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;

		int sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
		
		i--;
		j++;
		k++;
	}
	r[k] = '\0';
	reverse_string(r);

	return r;
}
