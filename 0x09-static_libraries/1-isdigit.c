#include "main.h"

/**
* _isdigit- function for checking for a digit 0 through 9.
* @c: digit to be cheked.
*
* Return: 1 if c is digit and 0 if otherwise.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
