#include "main.h"
/**
* main - function that prints alphabet in lower case.
* print_alphabet: a function that prints alphabets in lower case.
* Return: always 0 (success)
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
