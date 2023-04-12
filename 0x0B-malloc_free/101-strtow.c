#include "main.h"
#include <stdlib.h>

/**
* strtow - splits a string into words.
* @str: string to split.
* Return: pointer to an array of strings if successful
*     or NULL if unsuccessful or (Error).
*/
char **strtow(char *str)
{
	char **matrix, *word;
	int i, j, k = 0, len = 0, words = 0, start = 0, end = 0;

	while (*(str + len))
		len++;
	for (i = 0; i < len; i++)
	{
		if ((*(str + i) != ' ' && *(str + i) != '\t' && *(str + i) != '\n') &&
		(*(str + i + 1) == ' ' || *(str + i + 1) == '\t' || *(str + i + 1) == '\n'))
			words++;
	}
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ' && *(str + i) != '\t' && *(str + i) != '\n')
		{
			start = i;
			end = start + 1;
			while (*(str + end) != ' ' && *(str + end) != '\t' &&
				 *(str + end) != '\n' && *(str + end) != '\0')
			end++;
		word = (char *) malloc(sizeof(char) * (end - start + 1));
		if (word == NULL)
			return (NULL);
		for (j = 0; j < (end - start); j++)
			*(word + j) = *(str + start + j);
		*(word + j) = '\0';
		*(matrix + k) = word;
		k++;
		i = end;
		}
	}
	*(matrix + k) = NULL;

	return (matrix);
}
