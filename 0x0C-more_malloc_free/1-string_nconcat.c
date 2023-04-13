#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
* _strlen - calculates and returns the length of string.
* @str: the string whose length is calculated.
* Return: string length.
*/

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* string_nconcat - concatenates two strings.
* @s1: the first string.
* @s2: the second string.
* @n: bytes to concat from s2.
* Return: pointer to concatenated string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, len, num;

	num = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (num < 0)
	{
		return (NULL);
	}
	if (num >= _strlen(s2))
	{
		num = _strlen(s2);
	}

	len = _strlen(s1) + num + 1;
	ptr = malloc(sizeof(*ptr) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}


