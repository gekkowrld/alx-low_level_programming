# include "main.h"

/**
 * main - A function to display its name
 * @argc: The argument count
 * @argv: The argument variable
 * Return: EXIT_SUCCESS
*/

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (EXIT_SUCCESS);
}
