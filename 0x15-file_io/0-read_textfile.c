#include "main.h"

/**
 * read_textfile - Reads input from text file
 * @filename: The file where the contents are stored
 * @letters: The character count
 * Return: The characters read from file
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i = 0;
	FILE *fd;

	char *ch = malloc(sizeof(char) * letters);

	if (!ch && !filename)
		return (0);

	fd = fopen(filename, "r");

	if (!fd)
		return (0);

	i = read(fileno(fd), ch, letters);

	if (i == -1)
		return (0);

	if (write(STDOUT_FILENO, ch, i) == -1)
		return (0);

	free(ch);

	fclose(fd);

	return (i);

}
