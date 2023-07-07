#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: represents the number of command-line arg
 * @argv:  represents an array of strings
 *
 * Return: 0 for dir name else return arg num
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
