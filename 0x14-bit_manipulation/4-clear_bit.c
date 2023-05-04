#include "main.h"


/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: parameter.
* @index: index.
* Return: 1 if it works, and -1 if otherwise.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = (*n & ~(1UL << index)) | ((0 << index) & (1UL << index));
	return (1);
}
