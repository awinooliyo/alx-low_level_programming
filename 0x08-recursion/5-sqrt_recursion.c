#include "main.h"


/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: number whose square root is to be calculated.
* Return: square root of the number 'n'
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		int i;

		for (i = 1; i <= n / i; i++)
		{
			if (i * i == n)
			{
				return (i);
			}
		}
		return (-1);
	}
}


