# include "main.h"

/**
 * main - A function to display its name
 * @argc: The argument count
 * @argv: The argument variable
 * Return: EXIT_SUCCESS
*/

int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", --argc);
	return (EXIT_SUCCESS);
}
