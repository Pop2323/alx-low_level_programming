#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s: pointer to pointer
 * @to: char of pointer
*/

void set_string(char **s, char *to)
{
	*s = to;
}
