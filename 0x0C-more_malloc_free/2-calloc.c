#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory of an array using malloc.
* @nmemb: number of elements in the array.
* @size: size of elememts in the array.
* Return: Null when size of nmemb is 0 or malloc fails and
*	pointer to memory allocated when successful.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + 1) = 0;
	}
	return (p);
}
