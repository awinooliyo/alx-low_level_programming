#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
*@s: the string to be scanned.
*@accept: the string containing the characters to match.
* Return: the length of the segment.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;

	for (unsigned int i = 0; s[i] != '\0'; i++)
	{
		for (unsigned int j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			c++;
			break;
			}
		}
			if (accept[c] == '\0')
			break;
	}
	return (c);
}
