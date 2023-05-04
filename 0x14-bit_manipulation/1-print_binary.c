#include "main.h"


/**
* _powcal - calculates the (base ^ power).
* @base: base of the exponent.
* @power: power of the exponent.
* Return: value of the (base ^ power).
*/

unsigned long int _powcal(unsigned int base, unsigned int power)
{
	unsigned long int numb;
	unsigned int e;

	numb = 1;

	for (e = 1; e <= power; e++)
	{
		numb *= base;
	}
	return (numb);
}


/**
* print_binary - prints the binary representatiion of a number.
* @n: number to print.
* Return: nothing.
*/

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _powcal(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
