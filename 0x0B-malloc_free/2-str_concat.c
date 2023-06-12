# include "main.h"

/**
 * str_concat - A function that concatenates two strings
 * @s1: The first string (or original)
 * @s2: The second stirng (or the one to be concatenated)
 * Return: The concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	int len_s1 = strlen(s1), len_s2 = strlen(s2);
	int i = 0, j = 0;
	char *t;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	t = malloc(sizeof(char) * (len_s1 + len_s2) + 1);

	if (t == NULL)
		return (NULL);

	while (i < len_s1)
	{
		t[i] = s1[i];
		i++;
	}

	for (i = 0; i < (len_s1 + len_s2 + 1); i++, j++)
		t[i + len_s1] = s2[i];

	t[(len_s1 + len_s2 + 1) + i] = '\0';

	return (t);
}
