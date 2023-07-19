#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is checker func
 *
 * @argc: the number of args being passed into your program
 * @argv: array of char pointers listing all the args
 *
 * Return: return 0
*/

int main(int argc, char *argv[])
{
	int num_b;
	char *main_ptr = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);
	num_b = atoi(argv[1]);
	if (num_b < 0)
		printf("Error\n"), exit(2);
	while (num_b > 0)
		printf("%02hhx", *main_ptr);
	if (num_b > 1)
		printf(" ");
	else
		printf("\n");
	main_ptr++;
	num_b--;
	return (0);
}
