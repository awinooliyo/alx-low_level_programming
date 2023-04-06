#include "main.h"

int find_sqrt(int n, int guess);
/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: integer whose square root is to be calculated.
*
* Return: square root of the number if found, or -1 if not a perfect square.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (find_sqrt(n, 1));

}

/**
* find_sqrt - the helper function to find the square root recursively.
* @n: the number to determine if square root
* @guess: the current guess at the square root.
*
* Return: square root of natural square root, otherwise -1.
*/

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (find_sqrt(n, guess + 1));
}
