# include "3-calc.h"

/**
 * main - A function to calculate the
 * simple arithmetic
 * @argc: The argument count
 * @argv: The arguments that will be passed to
 * the function
 * Return: EXIT_SUCCESS
 *
*/
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int (*op_arg)(int, int) = get_op_func(argv[2]);

		if (strlen(argv[2]) != 1)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", op_arg(atoi(argv[1]), atoi(argv[3])));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (EXIT_SUCCESS);
}
