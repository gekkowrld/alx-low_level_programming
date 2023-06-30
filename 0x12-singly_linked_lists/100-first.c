# include "lists.h"

/**
 * before_main - A function that is used to print
 * out some text before main
 * We can use the ((destructor)) to have the
 * opposite effect
*/

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
