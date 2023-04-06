#include "main.h"

int sqrt_helper(int n, int start, int end);

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: number whose square root is to be calculated.
*
* Return: square root of the number 'n'
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0, n));

}

/**
* sqrt_helper - a recursive helper functiion that finds the
*natural number square root.
* @n:int type number whose square root is to be calculated.
* @start: the starting value for the search range.
* @end: the ending value of the search range.
* Return: square root of natural square root, otherwise -1.
*/

int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;
	int square = mid * mid;

	if (square == n)
	{
		return (mid);
	}

	if (square < n)
	{
		if (mid + 1 <= end)
		{
			return (sqrt_helper(n, mid + 1, end));
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		if (start <= mid - 1)
		{
			return (sqrt_helper(n, start, mid - 1));
		}
		else
		{
			return (-1);
		}
	}
}
