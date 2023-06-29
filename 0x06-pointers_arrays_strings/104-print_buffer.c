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
	for (int i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		for (int j = i; j < i + 10 && j < size; j += 2)
		{
			printf("%02x", (unsigned char)b[j]);
			if (j + 1 < size)
				printf("%02x ", (unsigned char)b[j + 1]);
			else
				printf("   ");
		}
		printf(" ");
		for (int j = i; j < i + 10 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
