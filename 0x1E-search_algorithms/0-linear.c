#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

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

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; ++i)
    {
        printf("Value checked array[%lu] = %d\n", i, array[i]);

        if (array[i] == value)
            return (i);
    }
    return (-1);
}
