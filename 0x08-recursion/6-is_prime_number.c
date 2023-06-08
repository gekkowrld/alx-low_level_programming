# include "main.h"

/**
 * is_prime_helper - A function that does the work of
 * calculating if a number is actually prime or not
 * @x: It holds the value of n
 * @y: It holds the calculated value
 * Return: If prime or not
*/

int is_prime_helper(int x, int y)
{
	if ((x % y) == 0)
		return (0);
	else if ((y * y) > x)
		return (1);
	else
		return (is_prime_helper(x, y + 1));
}

/**
 * is_prime_number - A function to determine if a number is
 * prime or not
 * @n: The number to be tested for prime
 * Return: If prime or not
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_helper(n, 2));

}
