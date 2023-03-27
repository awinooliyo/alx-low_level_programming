#include "main.h"

/**
*puts_half - prints half the string
* Author is Erick.
*@str: the string to be printed.
*return: always o.
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
