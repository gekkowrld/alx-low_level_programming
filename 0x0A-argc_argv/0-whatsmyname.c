# include "main.h"

/**
 * main - A function to display its name
 * @argc: The argument count
 * @argv: The argument variable
 * Return: The name of the program
*/

int main(__attribute__((unused))int argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (EXIT_SUCCESS);
}
