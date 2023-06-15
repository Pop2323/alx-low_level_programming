#include <unistd.h>

/**
 * main - Entry point
 *
 * Title: This will print without using the stdio library
 *
 * Return: return 1
*/

int main(void)
{
	char msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, sizeof(message) - 1);
	return (1);
}
