# include "main.h"

/**
 * string_nconcat - A function that concatenates two strings
 * using malloc
 * @s1: The first string (destination)
 * @s2: The second string (source)
 * @n: The character count of s2
 * Return: concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1_len = strlen(s1), t_len;
	char *concat;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	t_len = s1_len + n + 1;

	concat = malloc(sizeof(char) * t_len);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];

	for (i = 0; i < n; i++)
		concat[i + s1_len] = s2[i];

	concat[t_len - 1] = '\0';

	return (concat);

}
