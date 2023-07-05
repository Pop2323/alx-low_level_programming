#include "main.h"

/**
 * check_recursive - function that check the recueion
 *
 * @n: imteger num
 * @i: int num
 *
 * Return: int
*/

int check_recursive(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_recursive(n, i - 1));
}
/**
 * is_prime_number - func that returns 1 if the input int is a prime else 0
 *
 * @n: imt num
 *
 * Return: int
*/

int is_prime_number(int n)
{
	return (check_recursive(n, n / 2));
}
