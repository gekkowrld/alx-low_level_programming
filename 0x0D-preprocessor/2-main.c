# include <stdio.h>

/**
 * main - A function that prints out the file name
 * that it is being executed from
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
*/

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
