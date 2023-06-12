# include "main.h"

/**
 * *_strdup - A function that returns a pointer to the allocated
 * memory if sucessfull
 * @str: The string that memmory will be allocated to
 * Return: The pointer to the memory
*/

/**
 * For now the standard strdup has a bug.
 * On a debian, strdup doesn't behave as expected,
 * I'll be modifying the custom one but for more info check the bug
 * https://bugs.debian.org/cgi-bin/bugreport.cgi?bug=222891
 *
 * Apparently handling string NULL which is one of the tests in ALX
 * isn't habdled well on Debian
 *
 * This seems to be a Debian problem so other distro's should work well
*/

char *_strdup(char *str)
{
	int len = strlen(str);
	int i = 0;
	char *arr;

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(char) * len);

	if (arr == NULL)
		return (NULL);

	while (i < len)
	{
		arr[i] = *str++;
		i++;
	}

	return (arr);
}
