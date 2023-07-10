#include "main.h"

/**
 * append_text_to_file - Appends text to an existing
 * file. If the file doesn't exist it does nothing
 * @filename: The name of the file to be created
 * @text_content: The content to be added to the file
 * Return: 1 for success and -1 for failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	len = strlen(text_content);

	if (write(fd, text_content, len) == -1)
		return (-1);

	close(fd);

	return (1);
}
