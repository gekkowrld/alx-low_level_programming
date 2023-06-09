# include "main.h"

/**
* _isdigit - checks if a number is a digit between
* 0 - 9
* @c: character to be checked
* Return: 1 on success otherwise 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
