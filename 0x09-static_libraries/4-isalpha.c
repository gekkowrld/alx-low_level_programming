#include "main.h"
/**
 * _isalpha - checks for alphabet characters
 * @c: char to be checked
 * Return: 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
