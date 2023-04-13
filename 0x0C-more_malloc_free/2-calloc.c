#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory of an array using malloc.
* @nmemb: number of elements in the array.
* @size: size of elememts in the array.
* Return: NULL when size or nmemb is 0
* NULL when  malloc fails, and
* Pointer to memory allocated if successful.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}
