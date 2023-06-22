# include "3-calc.h"

/**
 * op_add - A function to add two numbers
 * @a: The first number to be calculated
 * @b: The second number to be calculated
 * Return: Addition of the numbers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function to subtract two numbers
 * @a: The first number to be calculated
 * @b: The second number to be calculated
 * Return: Subtraction of the numbers
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function to multiply two numbers
 * @a: The first number to be calculated
 * @b: The second number to be calculated
 * Return: Multiplication of the numbers
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function to divide two numbers
 * @a: The first number to be calculated
 * @b: The second number to be calculated
 * Return: Division of the numbers
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - A function to perform a
 * modulus of two numbers
 * @a: The first number to be calculated
 * @b: The second number to be calculated
 * Return: Modulus of the numbers
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
