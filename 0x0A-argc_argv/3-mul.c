# include "main.h"

/**
 * main - A function that does multiplication
 * @argc: The argument count
 * @argv: The argument variable
 * Return: The name of the program
*/

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (EXIT_SUCCESS);
}
