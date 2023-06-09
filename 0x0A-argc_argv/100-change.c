# include "main.h"

/**
 * main - A function that calculates "change"
 * @argc: The argument count
 * @argv: The argument variable
 * Return: EXIT_SUCCESS
 * 25, 10, 5, 2, and 1 cent
*/
int main(int argc, char **argv)
{
	int coins = 0;

	if (argc == 2)
	{
		int k[] = {25, 10, 5, 2, 1};
		int i, j = atoi(argv[1]);

		for (i = 0; i < 5; i++)
		{
			while (j >= k[i])
			{
				j -= k[i];
				coins++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", coins);
	return (EXIT_SUCCESS);
}
