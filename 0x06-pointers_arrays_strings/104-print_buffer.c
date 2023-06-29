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
		printf("\n");
		return;
	int i, j;

	for (i = 0; i < size; i += 10)
		printf("%08x: ", i);
		for (j = 0; j < 10; j += 2)
			if (i + j < size)
				printf("%02x%02x ", (unsigned char)b[i + j], (unsigned char)b[i + j + 1]);
			else
				printf("     ");
		printf(" ");
		for (j = 0; j < 10; j++)
			if (i + j < size)
				char c = b[i + j];

				if (isprint(c))
					printf("%c", c);
				else
					printf(".");
			else
				printf(" ");
		printf("\n");
}
