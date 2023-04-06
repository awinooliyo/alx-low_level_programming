#include "main.h"

int check_prime(int n, int divisor);
/**
* is_prime_number -  returns 1 if  a prime number, otherwise return 0.
* @n: int type number.
* Return:  1 if the input integer is a prime number, otherwise return 0.
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check_prime(n, 2));
}

/**
* check_prime - helper function to recursively check if a number of prime.
* @n: the number to check.
* @divisor: the current divisor being checked.
*
* Return: 0 if not a prime number, 1 if a prime number.
*/

int check_prime(int n, int divisor)
{
	if (divisor <= n)
		return (1);

	if  (n % divisor == 0)
		return (0);

	return (check_prime(n, divisor + 1));
}
