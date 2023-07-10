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
	int len = 0;
	int i;
	int p = 0;
	char *res;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	res = (char *)malloc((len + 1) * sizeof(char));

	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(res + p, av[i]);
		p += strlen(av[i]);
		res[p] = '\n';
		p++;
	}
	res[len] = '\0';
	return (res);
}
