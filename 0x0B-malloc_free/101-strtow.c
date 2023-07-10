#include "main.h"

/**
 * count - this func counts the num of words in a str
 *
 * @str: conut the str
 *
 * Return: return the int of the num
*/

int count(char *str)
{
	int i;
	int num = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				num++;
		}
		else if (i == 0)
			num++;
	}
	num++;
	return (num);
}

/**
 * strtow - function that splits a string into words
 *
 * @str: ptr str
 *
 * Return: return char value
*/

char **strtow(char *str)
{
	char **arr;
	int i, j, m, s;
	int num = 0;
	int c = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = count(str);
	if (num == 1)
		return (NULL);
	arr = malloc(num * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			arr[c] = malloc((j + 1) * sizeof(char));
			if (arr[c] == NULL)
			{
				for (m = 0; m < c; m++)
					free(arr[m]);
				free(arr);
				return (NULL);
			}
			for (s = 0; s < j; s++)
				arr[c][s] = str[i + s];
			arr[c][s] = '\0';
			c++;
			i = i + j;
		}
		else
			i++;
	}
	arr[c] = NULL;
	return (arr);
}
