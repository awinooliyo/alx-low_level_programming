#include "main.h"

/**
* is_prime_number -  returns 1 if  a prime number, otherwise return 0.
* @n: int type number.
* Return:  1 if the input integer is a prime number, otherwise return 0.
*/

int is_prime_number(int n)
{
	int prime_number(int divider, int n)

	int divider = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n % n == 0 || n % 1 == 0)
	{
		if (prime_number(divider, n) != 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

/**
* prime_number - helper function for the recursive steps.
* @n: number given to the original function.
* @divider: incrementer divisor.
* Return: 0 if not a prime number, 1 if a prime number.
*/

int prime_number(int divider, int n)
{
	if (divider < n)
	{
		if (n % divider == 0)
		{
			return (0);
		}
		else
		{
			++divider;
			return (prime_number(divider, n));
		}
	}
	else
	{
		return (1);
	}
}
