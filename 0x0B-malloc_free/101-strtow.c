# include "main.h"

/**
 * strtow - A function that splits strings into words
 *
 * @str: The string to be split
 *
 * Return: A splitted string
*/

char **strtow(char *str)
{
	int i = 0, str_len = 0;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (str[i] != '\0')
	{

	}

	arr = malloc(sizeof(char *) * str_len);

	if (arr == NULL)
		return (NULL);

	while (i < str_len)
	{
		arr[i] = str;
		if (str[i] == 32)
			continue;
		i++;
	}

	return (arr);
}
