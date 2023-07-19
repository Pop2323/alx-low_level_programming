#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: ptr string name
 * @f: func that will print the ptr
 *
 * Return: return void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
