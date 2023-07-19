#include "3-calc.h"

/**
 * main - this is checker func
 *
 * @argc: the num of args being passed into your program
 * @argv: array of char ptrs listing all the args
 *
 * Return: return 0
*/

int main(int argc, char *argv[])
{
	int (*func_ptr)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func_ptr = get_op_func(argv[2]);
	if (!func_ptr)
		printf("Error\n"), exit(99);
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", func_ptr(a, b));
	return (0);
}
