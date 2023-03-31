#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string (s).
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}
