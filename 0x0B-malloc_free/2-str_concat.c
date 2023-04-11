#include "main.h"
#include <stdlib.h>


/**
* str_concat - concatenates two strings.
* @s1: first string.
* @s2: second string.
*
* Return: pointer to the concatenated string.
*/

char *str_concat(char *s1, char *s2)
{
	char *ct;
	int i, j, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{

	}
	for (j = 0; s2[j] != '\0'; j++)
	{

	}

	ct = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (ct == NULL)
	{
		return (NULL);
	}

	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
		{
			ct[c] = s1[c];
		}
		else
		{
			ct[c] = s2[d++];
		}

	}

	return (ct);

}
