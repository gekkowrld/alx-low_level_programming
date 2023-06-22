# include "function_pointers.h"

/**
 * print_name - Prints out a name
 * @name: This is the name to be printed out
 * @f: The function to be called
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(f(name));
}
