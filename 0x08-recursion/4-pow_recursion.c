# include "main.h"

/**
 * _pow_recursion - A function to compute the power using recursion
 * @x: The number to be computed
 * @y: The power to be raised to
 * Return: The computation result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}
