#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers.
* @min: the minimum value.
* @max: the maximum value.
* Return: pointer to newly created array.
* NULL when malloc fails.
* NULL  when minimum is greater than maximum.
*/

int *array_range(int min, int max)
{
	int range, i;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);
	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
