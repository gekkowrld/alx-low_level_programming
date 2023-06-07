# include "main.h"

/**
 * _sqrt_helper - A function to hold the values of possible
 * roots before being passed on to the main function
 * @x: The number to hold the n value
 * @y: The number to hold the root values
 * Return: The root (or square root)
*/

int _sqrt_helper(int x, int y)
{

	if ((y * y) == x)
		return (y);
	else if ((y * y) > x)
		return (-1);
	else
		return (_sqrt_helper(x, y + 1));
}


/**
 * _sqrt_recursion - A function to calculate the square root
 * of a number recursively
 * @n: The number to be calculated recursively
 * Return: The square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}
