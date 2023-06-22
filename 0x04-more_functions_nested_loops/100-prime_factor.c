#include "main.h"

/**prime_factor - program that finds and prints the largest prime factor
 *
 * @x: input num
 *
 * Return: return 0
*/

unsigned long long largest_prime_factor(unsigned long long n)
{
	unsigned long long factor = 2;
	
	while (factor * factor <= n)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}
	return n;
}

int main()
{
	unsigned long long number = 612852475143;
	unsigned long long largest_factor = largest_prime_factor(number);
	
	printf("The largest prime factor of %llu is %llu\n", number, largest_factor);
	
	return 0;
}
