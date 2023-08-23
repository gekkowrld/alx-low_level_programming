#include "main.h"

/**
 * main - Copy file content from file_from to file_to
 * @argc: The argument count
 * @argv: The argument string/content
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int f_from, f_to;
	size_t b_read;
	char *ch = malloc(sizeof(char) * BUFFER);

	if (!ch)
		return (-1);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC);

	if (f_to == -1)
		return (-1);

	if (chmod(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) == -1)
		return (-1);

	if (f_to == -1)
		return (-1);

	f_from = open(argv[1], O_RDONLY);

	while ((b_read = read(f_from, ch, BUFFER)) > 0)
	{
		if (f_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		read(f_from, ch, BUFFER);

		if (write(f_to, ch, BUFFER) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close(f_from);
	close(f_to);
	free(ch);

	return (0);
}
