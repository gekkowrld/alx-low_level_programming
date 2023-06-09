# include "main.h"

/**
 * main - A function that adds all the cli args unless a
 * non-digit is passed
 * @argc: The argument count
 * @argv: The argument variable
 * Return: EXIT_SUCESS
*/

int main(int argc, char **argv)
{
	int sum = 0;

	while (--argc)
	{
		if (atoi(argv[argc]))
			sum += atoi(argv[argc]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (EXIT_SUCCESS);
}
