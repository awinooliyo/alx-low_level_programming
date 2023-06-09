#include <stdlib.h>
#include "main.h"

/**
* create_array - create an array of chars,
*           and initializes it with specific char.
* @size: the size of the array being created.
* @c: the char to initialize the array c.
* Return: pointer to the array if successful, otherwise NULL.
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (0);
	}

	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}

	*(ptr + i) = '\0';

	return (ptr);
}
