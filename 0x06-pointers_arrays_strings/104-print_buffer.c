#include "main.h"

/**
 * print_buffer - function that prints a buffer
 *
 * @b: buffer pointer
 * @size: size of buff
 *
 * Return: Nothing
*/

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10 && j < size; j++)
		{
			printf("%02x%s", (unsigned char)b[j], (j % 2 == 1) ? " " : "");
		}
		for (j = i; j < i + 10 && j < size; j++)
		{
			printf("%c", (b[j] >= 32 && b[j] <= 126) ? b[j] : '.');
		}
		printf("\n");
	}
}
