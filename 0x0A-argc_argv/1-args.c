# include "main.h"

/**
 * main - A function to displays the argument count
 * pased into it
 * @argc: The argument count
 * @argv: The argument variable
 * Return: EXIT_SUCCESS
*/

int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", --argc);
	return (EXIT_SUCCESS);
}
