#include "main.h"

/**
 * get_endianness - Get the endianess of a
 * computer
 * Return: 1 for Little and 0 for Big
*/

int get_endianness(void)
{
	int n = 1;

	return ((*(char *)&n == 1) ? 1 : 0);
}
