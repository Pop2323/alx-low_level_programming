#include "main.h"
#include <math.h>

/**
 * prime_factor - Check if a number is prime
 * @num: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime_factor(unsigned long long num)
{
	if (num < 2)
		return (0);

	for (unsigned long long i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			return (0);
	}

	return (1);
}

/**
 * find_largest_prime_factor - Find and print the largest prime factor
 * @num: The number to find the largest prime factor for
 */
void find_largest_prime_factor(unsigned long long num)
{
	unsigned long long largest_factor = 0;

	for (unsigned long long i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0 && prime_factor(i))
			largest_factor = i;
	}

	if (largest_factor == 0)
		largest_factor = num;
	printf("The largest prime factor of %llu is %llu\n", num, largest_factor);
}

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long long number = 612852475143;

	find_largest_prime_factor(number);

	return (0);
}
