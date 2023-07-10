#include "main.h"

/**
 * create_file - A function to create a file
 * @filename: The name of the file to be created
 * @text_content: The text to be added to the file
 * Return: 1 for success and -1 for fail
*/

int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int len;

	if (!filename)
		return (-1);

	fp = fopen(filename, "w");

	if (!fp)
		return (-1);

	chmod(filename, S_IRUSR | S_IWUSR);

	len = strlen(text_content);
	if (len != 0)
		if (!write(fileno(fp), text_content, len))
			return (-1);

	fclose(fp);
	return (1);
}
