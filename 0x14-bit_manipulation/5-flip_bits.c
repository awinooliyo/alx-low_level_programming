#include "main.h"

/**
* flip_bits - returns the number of bits that you
* would need to flip to get from one number to the other.
* @n: first number.
* @m: second number.
* Return: number of bits to change.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
