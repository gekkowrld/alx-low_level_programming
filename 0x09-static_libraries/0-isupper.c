# include "main.h"

/**
* _isupper - determine if the value is uppercase
* or not
* @c: char to be determined
* Return: 1 on success and 0 on fail
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
