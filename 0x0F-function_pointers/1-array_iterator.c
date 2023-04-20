#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function given as parameter
* on each element of an array.
* @array: the array to iterate.
* @size: the size of the array.
* @action: the pointer to the function used.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
