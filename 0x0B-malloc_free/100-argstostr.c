#include "main.h"

/**
 * *argstostr - concatenates all the arguments of your program
 *
 * @ac: int value
 * @av: char value
 *
 * Return: return Null or Value
*/

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	int len = 0;
	int i;

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	char *res = (char *)malloc(len * sizeof(char));

	if (res == NULL)
	{
		return (NULL);
	}

	int p = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(res + p, av[i]);
		p += strlen(av[i]);
		res[p] = '\n';
		p++;
	}
	return (res);
}
