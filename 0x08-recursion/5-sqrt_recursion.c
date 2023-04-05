#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: number whose square root is to be calculated.
* @sqr: square root.
* Return: square root of the number 'n'
*/

int _sqrt_recursion(int n)
{
	int sqt_helper(int n, int guess);

	int guess = 1;

	return (sqt_helper(n, guess));
}

/**
* sqt_helper - helper function that solves _sqrt_recursion.
* @n:int type number.
* @guess: current guess for the square root.
*Return: square root of natural square root, otherwise -1.
*/

int sqt_helper(int n, int guess)
{
	if (n == guess * guess)
	{
		return (guess);
	}
	else if (guess < n)
	{
		return (sqt_helper(n, ++guess));
	}
	else
	{
		return (-1);
	}
}
