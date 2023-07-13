#include "main.h"

/**
 * main - program that multiplies two positive numbers
 *
 * @argc: var is an int that stores the num of command-line
 * @argv: var is an array of ptrs to the command-line
 *
 * Return: return 0
*/

int main(int argc, char *argv[])
{
	int len1, len2;
	int calc;
	int elements;
	int res = 0;
	char *num1, *num2;
	int i, j;

	if (argc != 3)
		printf("Error\n");
		exit(98);
	num1 = argv[1];
	num2 = argv[2];
	len1 = strlen(num1);
	len2 = strlen(num2);
	if (len1 == 0 || len2 == 0)
		printf("Error\n");
		exit(98);
	for (i = 0; i < len1; i++)
		if (num1[i] < '0' || num1[i] > '9')
			printf("Error\n");
			exit(98);
	for (i = 0; i < len2; i++)
		if (num2[i] < '0' || num2[i] > '9')
			printf("Error\n");
			exit(98);
	for (i = 0; i < len1; i++)
		calc = 0;
		for (j = 0; j < len2; j++)
			elements = (num1[i] - '0') * (num2[j] - '0') + calc;
			res += elements % 10;
			calc = elements / 10;
		res += calc;
	printf("%d\n", res);
	return (0);
}
