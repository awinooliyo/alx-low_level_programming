#include "main.h"

/**
*swap_int - a function that swaps two integers.
* @a: integer to be swapped.
* @b: integer to be swapped.
*
*Return: always 0.
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
