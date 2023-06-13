# include "main.h"

/**
 * *argstostr - A function that allocates memory to the
 * args supplied to it and returns it
 * @ac: Argument count
 * @av: The actual argument passed
 *
 * Return: The arguments
*/

char *argstostr(int ac, char **av)
{
	int i = 0, j, k = 0, t_len = 0;
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		t_len += strlen(av[i]);
		i++;
	}

	args = malloc(sizeof(char) * (t_len + ac + 1));

	if (args == NULL)
		return (NULL);

	i = 0;

	while (i < ac)
	{
		int av_len = strlen(av[i]);

		for (j = 0; j < av_len; j++)
			args[k++] = av[i][j];

		args[k++] = '\n';
		i++;
	}

	args[k] = '\0';

	return (args);
}
