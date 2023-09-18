#include <stdio.h>

/**
 * add - func that add two intgers
 *
 * @a: first num
 * @b: second num
 *
 * Return: return the addition
*/
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - func that subtract two intgers
 *
 * @a: first num
 * @b: second num
 *
 * Return: return the subtraction
*/
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - func that multiply two intgers
 *
 * @a: first num
 * @b: second num
 *
 * Return: return the multiplication
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - func that divide two intgers
 *
 * @a: first num
 * @b: second num
 *
 * Return: return the quotient, or 0 if b is 0
*/
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Erroe: Division\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - func that find the remainder of dividing two intgers
 *
 * @a: first num
 * @b: second num
 *
 * Return: return the remainder, or 0 if b is 0
*/
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division\n");
		return (0);
	}
	return (a % b);
}
