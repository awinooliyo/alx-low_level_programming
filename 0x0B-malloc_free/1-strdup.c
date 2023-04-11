#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicates a string using malloc.
* @str: the string to duplicate.
* Return: Pointer to the newly duplicated string.
*/

char *_strdup(char *str)
{
	char *x;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{

	}

	x = malloc((i + 1) * sizeof(*x));
	if (x == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		x[j] = str[j];
	}
	x[j] = '\0';

	return (x);
}
