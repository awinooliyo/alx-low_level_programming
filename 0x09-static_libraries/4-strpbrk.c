#include "main.h"

/**
* _strpbrk - Searches for any of a set of bytes.
*@s: the string to be scanned.
*@accept: string containing the characters to match.
*Return: pointer to the byte in s matching one of the bytes
* in accept or NULL if no such bye is found.
*
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
