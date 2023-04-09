#include "main.h"

/**
*  _abs - function computing absolute values of an integer.
* @c: number to be computed.
* Return: Absolute value of the number.
*/
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
