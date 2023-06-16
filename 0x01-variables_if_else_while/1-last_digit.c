#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Title: This will print the last digit
 *
 * Return: return 0
*/

int main(void)
{
	int n, lst_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_dig = n % 10;

	if (lst_dig > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lst_dig);
	else if (lst_dig == 0)
		printf("Last digit of %i is %i and is 0\n", n, lst_dig);
	else if (lst_dig < 6 && lst_dig != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lst_dig);
	return (0);
}
