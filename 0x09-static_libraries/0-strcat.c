#include "main.h"
#include <string.h>

/**
* *_strcat- A function that concatenates two strings.
*@dest: first string.
*@src: second string.
* Return: string.
*/

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int  a;

	while (dest[len])
		len++;
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[len] = src[a];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
