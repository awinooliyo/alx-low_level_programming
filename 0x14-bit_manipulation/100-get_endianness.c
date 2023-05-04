#include "main.h"


/**
* get_endianness - checks the endianness.
* Return: 0 if big endian, 1 if little endian.
*/

int get_endianness(void)
{
	int numb = 1;
	char *p = (char *)&numb;

	if (*p == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
