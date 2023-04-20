#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - function that searches for an integer.
* @size: the size of array.
* @array: array to search through.
* @cmp: a pointer to the function that compares values.
* Return: index of the first element where cmp function does't return 0,
* -1 if no elements matches or size <= 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
