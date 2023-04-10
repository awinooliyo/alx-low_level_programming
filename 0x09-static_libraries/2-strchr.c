#include "main.h"

/**
*_strchr - function that locates a character in a string.
*@s: the original string the character is to be searched.
*@c: the variable for the character searched in the string.
*Return: pointer value to the first occurence of char
* or NULL if char is not found.
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
	s++;
	}
	return (s + 1);
}
