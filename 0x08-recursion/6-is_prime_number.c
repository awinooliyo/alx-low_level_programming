#include "main.h"

/**
* is_prime_number -  returns 1 if  a prime number, otherwise return 0.
* @n: int type number.
* Return:  1 if the input integer is a prime number, otherwise return 0.
*/

int is_prime_number(int n)
{
	int j;

	if (n <= 1)
	{
		return (0);
	}
	else if (j > n / 2)
	{
		return (1);
	}
	else if (n % j == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number(n, j + 1));
	}
}
