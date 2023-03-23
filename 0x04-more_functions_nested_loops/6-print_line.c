#include "main.h"

/**
* print_line - function that drawa a straight line in the terminal.
* @n: the number of times the character _ is printed.
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
