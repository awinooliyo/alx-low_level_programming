#include "search_algos.h"


/**
 * linear_search - Searches for a value in an array using linear search.
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in an array.
 * @value: the value to search for.
 *
 * Return: -1 if the value is not present in an array or if the array is NULL
 *          or the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	/* Checking for the null array */
	if (array == NULL)
	{
		return (-1);
	}

	/* Iterate through the array */
	for (i = 0; i < size; i++)
	{
		/* Printing the compared value */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* If the value is found, return index */
		if (array[i] == value)
			return (i);
	}
	/* If the value is not found, return -1 */
	return (-1);
}
