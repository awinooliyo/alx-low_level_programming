#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array.
 * @array: pointer to the first element of the array.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index of the value in the array or -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, block, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = block = 0; block < size && array[block] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", block, array[block]);
		i = block;
		block += step;
	}


	printf("Value found between indexes [%ld] and [%ld]\n", i, block);

	block = block < size - 1 ? block : size - 1;
	for (; i < block  && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array [%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
