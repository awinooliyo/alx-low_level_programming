#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory of an array using malloc.
* @nmemb: number of elements in the array.
* @size: size of elememts in the array.
* Return: Null when size of nmemb is 0
* Null when  malloc fails, and
* Pointer to memory allocated if successful.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	return ((void *)p);
}
